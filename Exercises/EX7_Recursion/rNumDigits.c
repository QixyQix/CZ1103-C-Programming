/*
Write a recursive function that counts the number of digits for a non-negative integer. 
For example, 1234 has 4 digits. Write two versions of the function. 
The function rNumDigits1() returns the result. The function rNumDigits2() returns the result through the parameter result. 
The function prototypes are:

    int rNumDigits1(int num);
    void rNumDigits2(int num, int *result);
*/

#include <stdio.h>
int rNumDigits1(int num);
void rNumDigits2(int num, int *result);
int main()
{
   int number, result=0;
   
   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("rNumDigits1(): %d\n", rNumDigits1(number));   
   rNumDigits2(number, &result);
   printf("rNumDigits2(): %d\n", result);           
   return 0;
}
int rNumDigits1(int num)
{
   /* Write your program code here */
   int numRemainder = num/10;
   if(numRemainder == 0){
       return 1;
   }else{
       return 1+rNumDigits1(numRemainder);
   }
}
void rNumDigits2(int num, int *result)
{
    /* Write your program code here */
    int numRemainder = num/10;
   if(numRemainder == 0){
       *result += 1;
   }else{
       *result += 1;
       rNumDigits2(numRemainder, result);
   }
}