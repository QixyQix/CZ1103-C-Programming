/*
Write a recursive function that returns the square of a positive integer number num, 
by computing the sum of odd integers starting with 
1. The result is returned to the calling function. 
For example, if num = 4, then 42 = 1 + 3 + 5 + 7 = 16 is returned; 
if num = 5, then 52 = 1 + 3 + 5 + 7 + 9 = 25 is returned. 

Write two versions of the function. The function rSquare1() returns the result. 
The function rSquare2() returns the result through the parameter result. 

The function prototypes are:

    int rSquare1(int num);
    void rSquare2(int num, int *result);
*/

#include <stdio.h>
int rSquare1(int num);
void rSquare2(int num, int *result);
int main()
{
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rSquare1(): %d\n", rSquare1(number));
    rSquare2(number, &result);
    printf("rSquare2(): %d\n", result);
    return 0;
}
int rSquare1(int num)
{
    /* Write your program code here */
    int remainder = num - 1;
    if (remainder == 0)
    {
        return 1;
    }
    else
    {
        return ((2 * num) - 1) + rSquare1(remainder);
    }
}
void rSquare2(int num, int *result)
{
    /* Write your program code here */
    int remainder = num - 1;
    if (remainder == 0)
    {
        *result += 1;
    }
    else
    {
        *result += ((2 * num) - 1);
        rSquare2(remainder, result);
    }
}