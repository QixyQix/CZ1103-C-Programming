/*
Write a C function that accepts an English sentence as parameter, and returns the length of the longest
word in the sentence. For example, if the sentence is "I am happy.", then the length of the longest
word "happy" in the sentence 5 will be returned. Assume that each word is a sequence of English
letters. 

The function prototype is given as follows:
int longWordLength(char *s);
*/

/*edit*/

#include <ctype.h>

/*end_edit*/
#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    /*edit*/
    /* Write your code here */
    int longestWordCount = 0;
    int currentWordCount = 0;
    char *currChar = s;

    while (1)
    {
        if (isalpha(*currChar))
        {
            currentWordCount++;
        }
        else
        {
            if (currentWordCount >= longestWordCount)
            {
                longestWordCount = currentWordCount;
            }
            if (*currChar == '\0')
                break;
            currentWordCount = 0;
        }
        currChar++;
    }

    return longestWordCount;
    /*end_edit*/
}