/*
Write a C program that reads in character by character from an input source, until ‘#’ is entered. 
The output of the program is the number of English letters and the number of digits that appear in the input.           
*/

#include <stdio.h>
#include <ctype.h>
int main() 
{
   int ccount = 0, dcount = 0;
   char ch;
   printf("Enter your characters (# to end): \n");

   /* Write your program code here */
   ch = '\0';
   while(ch != '#'){
       
       scanf("%c", &ch);
       
       if(isalpha(ch)){
           ccount++;
       } 
       else if(isdigit(ch)){
           dcount++;
       }
   }
   scanf("\n");

   printf("The number of digits: %d\n", dcount);
   printf("The number of letters: %d\n", ccount);
   return 0;
}