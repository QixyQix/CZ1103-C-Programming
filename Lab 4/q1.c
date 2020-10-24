/*(sweepSpace) Write two versions of a C function that remove all the blank spaces in a string.
The first version sweepSpace1() will use array notation for processing the string, while the
other version sweepSpace2() will use pointer notation. The function prototypes are given
below:  
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
A sample program template is given below to test the functions:
*/

#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
    char str[80], str2[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    strcpy(str2, str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}
char *sweepSpace1(char *str)
{
    int i = 0;
    int charJump = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            charJump++;
        }
        else
        {
            str[i-charJump] = str[i];
        }
        i++;
    }
    str[i-charJump] = '\0';

    return str;
}
char *sweepSpace2(char *str)
{
    int charJump = 0;
    char *ptr = str;
    while(*ptr != '\0'){
        if(*ptr == ' '){
            charJump++;
        }else
        {
            *(ptr-charJump) = *ptr;
        }
        ptr++;
    }
    *(ptr-charJump) = '\0';
    return str;
}