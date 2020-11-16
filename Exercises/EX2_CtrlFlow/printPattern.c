/*
Write a C program that accepts a positive number height between 1 and 10 as its parameter value, 
and prints a triangular pattern according to height. 
Note that only 1, 2 and 3 are used to generate the patterns. 
A sample input and output session when the program is called is given below. 
For example, pattern(2) will print the following pattern:
1
22
333

pattern(7):
1
22
333
1111
22222
333333
1111111
*/

#include <stdio.h>
int main()
{
    int row, col, height;
    int num = 0;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");

    /* Write your program code here */
    num = 1; //Assume num starts with 1

    for (row = 1; row <= height; row++)
    {
        for (col = 0; col < row; col++)
        {
            printf("%d", num);
        }

        num++;
        printf("\n");

        if (num > 3)
        {
            num = 1;
        }
    }

    return 0;
}