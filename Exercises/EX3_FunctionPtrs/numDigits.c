/*
Write a function that counts the number of digits for a non-negative integer.
For example, 1234 has 4 digits. The function numDigits1() returns the result.
The function prototype is given below:

        int numDigits1(int num);

Write another function numDigits2() that passes the result through the pointer parameter, result.
The function prototype is given below:

        void numDigits2(int num, int *result);
*/

#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d\n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);
    return 0;
}
int numDigits1(int num)
{
    int result = 0;
    while (num > 0)
    {
        result++;
        num /= 10;
    }
    return result;
}
void numDigits2(int num, int *result)
{
    *result = 0;
    while (num > 0)
    {
        (*result)++;
        num /= 10;
    }
}