/*
Write a function palindrome() that reads a character string and determines whether or not it is a palindrome.
A palindrome is a sequence of characters that reads the same forwards and backwards.
For example, "abba" and "abcba" are palindromes, but "abcd" is not. The function returns 1 if it is palindrome,
or 0 if otherwise. The function prototype is given as follows:

    int palindrome(char *str);

Write a C program to test the function.
*/
#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int palindrome(char *str);
int main()
{
   char str[80];
   int result = INIT_VALUE;
   
   printf("Enter a string: \n");
   gets(str);
   result = palindrome(str);
   if (result == 1)
      printf("palindrome(): A palindrome\n");
   else if (result == 0)
      printf("palindrome(): Not a palindrome\n");    
   else 
      printf("An error\n");      
   return 0;
}
int palindrome(char *str)
{
   /* Write your code here */
   int size = strlen(str);
   int numberOfComparisons = size/2;
   
   int i;
   for(i = 0; i<numberOfComparisons;i++){
       if(*(str+i) != *((str+size-1)-i)){
           return 0;
       }
   }
   return 1;
}