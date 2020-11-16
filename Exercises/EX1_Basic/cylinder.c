/*
Write a C program that computes the volume and surface area of a cylinder.
The program reads the user input on the radius and height of the cylinder, and then computes the volume and surface area of the cylinder.
The relevant formulas are volume = πr2h and surface area = 2πrh + 2πr2, where r is the radius and h is the height.
*/

#include <stdio.h>
#include <math.h> //This time try and use math.h
#define PI 3.1416
int main() 
{
    int radius, height;
    float volume,surfaceArea;
    
    printf("Enter the radius:\n");
    scanf("%d",&radius);
    
    printf("Enter the height:\n");
    scanf("%d",&height);
    
    volume = PI * pow((float) radius,2.0) * height;
    surfaceArea = (2.0 * PI * radius * height) + (2.0 * PI * radius * radius);
    
    printf("The volume is: %0.2f\n",volume);
    printf("The surface area is: %0.2f\n", surfaceArea);
   return 0;
}