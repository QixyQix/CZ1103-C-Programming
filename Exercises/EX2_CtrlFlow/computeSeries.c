/*
Write a C program that computes the value of ex according to the following formula:
e^x = 1 + 1/x! + x^2/x!....+x^10/10!
*/

#include <stdio.h>
int main()
{
   int n, denominator = 1;
   float x, result = 1.0, numerator = 1.0;

   printf("Enter x: \n");
   scanf("%f", &x);
   
   numerator = x;
   for(n = 1; n <= 10; n++){
       result += numerator / (float) denominator;

       //Times x to the numerator to increase power by 1
       numerator *= x;
       //Times denominaor by the next number due to factorial
       denominator *= (n+1);
   }
   

   printf("Result = %.2f\n",  result);
   return 0;
}