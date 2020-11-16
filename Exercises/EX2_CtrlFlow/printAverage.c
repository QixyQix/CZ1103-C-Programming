/*
Write a C program that reads in several lines of non-negative integer numbers, 
computes the average for each line and prints out the average. 
The value –1 in each line of user input is used to indicate the end of input for that line.

Sample input and output sessions are given below:
*/

#include <stdio.h>
int main() 
{ 
   int total, count, lines, input;
   double average;
   int i;   

   printf("Enter number of lines: \n");
   scanf("%d", &lines);      

   /* Write your program code here */
   for(i = 1; i<=lines; i++){
       input = 0;
       total = 0;
       count = 0;
       average = 0.0;
       
       printf("Enter line %d (end with -1):\n",i);
       while(input != -1){
           scanf("%d", &input);
           if(input != -1){
                total += input;
                count++;
           }
       }
       //NOTE: Dummychar method does not work with APAS
       scanf("\n");
       
       average = (double) total / count;
       
       printf("Average = %0.2f\n", average);
   }

   return 0;
}