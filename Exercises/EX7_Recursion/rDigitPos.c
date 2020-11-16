/*
Write a recursive function that returns the position of the first appearance of a specified digit in a positive number. 
The position of the digit is counted from the right and starts from 1. If the required digit is not in the number,
 the function should return 0. Write two versions of the function. The function rDigitPos1() returns the result. 
 The function rDigitPos2() returns the result through the parameter result. The function prototypes are:

    int rDigitPos1(int num, int digit);
    void rDigitPos2(int num, int digit, int *pos);
*/

#include <stdio.h>
int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);
int main()
{
   int number, digit, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("Enter the digit: \n");
   scanf("%d", &digit);            
   printf("rDigitPos1(): %d\n", rDigitPos1(number, digit));           
   rDigitPos2(number, digit, &result);          
   printf("rDigitPos2(): %d\n", result);   
   return 0;
}
int rDigitPos1(int num, int digit) 
{
   /* Write your program code here */
   int remainder = num/10;
   int currNum = num%10;
   if(currNum == digit){
       return 1;
   }else if(remainder==0){
       return 0;
   }else{
       int result = rDigitPos1(remainder, digit);
       if(result){
           return 1+result;
       }else{
           return 0;
       }
   }
}
void rDigitPos2(int num, int digit, int *pos)
{  
   /* Write your program code here */
   int remainder = num/10;
   int currNum = num%10;
   if(currNum == digit){
       *pos += 1;
   }else if(remainder == 0){
       *pos = 0;
   }
   else{
       *pos += 1;
       rDigitPos2(remainder,digit,pos);
   }
}