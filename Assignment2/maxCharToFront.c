/*
Write a C function maxCharToFront() that accepts a character string str as parameter, finds the
largest character from the string (based on ASCII value), and moves it to the beginning of the string. E.g.,
if the string is "adecb", then the string will be "eadcb" after executing the function. The string will be
passed to the caller via call by reference. If more than one largest character is in the string, then the first
appearance of the largest character will be moved to the beginning of the string. For example, if the
string is "adecbe", then the resultant string will be "eadcbe". 

The function prototype is given as follows:
void maxCharToFront(char *str); 
*/

/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    /*edit*/
    /* Write your code here */
    char *currChar = str;
    char maxChar = *str;

    int i = 0;
    int index = 0;

    //Traverse through the string, find the max char & its index
    while (1)
    {
        if (*currChar == '\0')
            break;

        if (*currChar > maxChar)
        {
            index = i;
            maxChar = *currChar;
        }
        i++;
        currChar++;
    }

    //Shift the rest of the string backwards
    for (i = index; i >= 1; i--)
    {
        *(str + i) = *(str + i - 1);
    }
    *str = maxChar;

    /*end_edit*/
}