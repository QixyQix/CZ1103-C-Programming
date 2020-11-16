/*Write a function that extracts the odd digits from a positive number, and combines the odd digits
sequentially into a new number. The new number is returned to the calling function. If the input
number does not contain any odd digits, then the function returns -1. For example, if the input
number is 1234567, then 1357 will be returned; and if the input number is 24, then –1 will
returned. Write the function in two versions. The function extOddDigits1() returns the result
to the caller, while the function extOddDigits2() returns the result through the pointer
parameter, result. The function prototypes are given as follows:

int extOddDigits1(int num);
void extOddDigits2(int num, int *result);

A sample program template is given below to test the functions: */

#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
}

int extOddDigits1(int num)
{
    int total = -1;
    int tensMultiplier = 1;

    while (num != 0)
    {
        int currentNumber = num % 10;
        if (currentNumber % 2 == 1)
        {
            if(total == -1){
                total = 0;
            }
            total += currentNumber * tensMultiplier;
            tensMultiplier *= 10;
        }
        num /= 10;
    }

    return total;
}
void extOddDigits2(int num, int *result)
{
    *result = -1;
    int tensMultiplier = 1;

    while (num != 0)
    {
        int currentNumber = num % 10;
        if (currentNumber % 2 == 1)
        {
            if(*result == -1){
                *result = 0;
            }
            *result += currentNumber * tensMultiplier;
            tensMultiplier *= 10;
        }
        num /= 10;
    }
}