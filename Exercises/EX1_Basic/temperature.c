/*
Write a C program that reads the user input on temperature in degrees Fahrenheit, 
and then converts the temperature from degrees Fahrenheit into degrees Celsius. 
The relevant formula is given as follows: Celsius = (5/9)*(Fahrenheit – 32).
*/

#include <stdio.h>
int main() 
{
   float fahrenheit, celsius;  // declare variables
   
   printf("Enter the temperature in degree F: \n");
   scanf("%f", &fahrenheit);

    //Edit code here
    celsius = (5.0/9.0)*(fahrenheit-32.0);

   printf("Converted degree in C: %.2f\n", celsius);
   return 0;
}