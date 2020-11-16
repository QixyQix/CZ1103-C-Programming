/*
Write two versions of a C function that remove all the blank spaces in a sentence. 
The first version sweepSpace1() will use array notation for processing the string,
 while the other version sweepSpace2() will use pointer notation. 
 The function prototypes are given below:

    char *sweepSpace1(char *sentence);
    char *sweepSpace2(char *sentence);
*/

#include <stdio.h>
#include <string.h> //Just for duplication purposes
char *sweepSpace1(char *sentence);
char *sweepSpace2(char *sentence);
int main()
{
    char str[80];
    char str2[80]; //They conveniently forgot that modifying it via call by value also modifies the original.

    printf("Enter the string: \n");
    gets(str);
    strcpy(str2, str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}
char *sweepSpace1(char *sentence)
{
    int i, j, len;

    i = 0;
    len = 0;
    while (sentence[i] != '\0')
    {
        len++;
        i++;
    }
    j = 0;
    for (i = 0; i < len; i++)
    {
        if (sentence[i] != ' ')
        {
            // update the string by removing any space detected
            sentence[j] = sentence[i];
            j++;
        }
    }
    sentence[j] = '\0'; // add a null character
    return sentence;
}
char *sweepSpace2(char *sentence)
{
    /* Write your program code here */
    char *readPtr = sentence;
    char *writePtr = sentence;

    while (*readPtr != '\0')
    {
        if (*readPtr != ' ')
        {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++;
    }
    *writePtr = '\0';

    return sentence;
}