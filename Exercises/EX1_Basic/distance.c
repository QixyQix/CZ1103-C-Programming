/*
The distance between two points (x1, y1) and (x2, y2) is given by sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)).
Write a C program that reads the (x, y) coordinates for two points, computes the distance between the two points.
*/

#include <stdio.h>
#include <math.h>
int main() 
{
    int xPt1,yPt1,xPt2,yPt2;
    
    printf("Enter first point x1 y1:\n");
    scanf("%d", &xPt1);
    scanf("%d", &yPt1);
    
    printf("Enter second point x2 y2:\n");
    scanf("%d",&xPt2);
    scanf("%d", &yPt2);
    
    //Note use of Math.h here
    double distance = sqrt((xPt2-xPt1)*(xPt2-xPt1) + (yPt2-yPt1)*(yPt2-yPt1));
    
    printf("The distance is %0.2f",distance);
    
   return 0;
}