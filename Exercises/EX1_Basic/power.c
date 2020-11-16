/*
Write a C program that reads the user input on the current and resistance
 and displays the power loss of the cable on the screen. The relevant formula is P = I2R,
where P is the power loss in watts, I is the current in amperes and R is the resistance in ohms.
*/

#include <stdio.h>
int main() 
{
    int current;
    float resistance; //MUST USE FLOAT
    printf("Enter the current:\n");
    scanf("%d",&current);
    
    printf("Enter the resistance:\n");
    scanf("%f",&resistance);
    
    float computed = (float) (current*current) * resistance;
    //NOTE DECIMAL PLACE FORMATTING
    printf("The power loss: %0.2f",computed);
   return 0;
}