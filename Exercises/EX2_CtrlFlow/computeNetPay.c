/*
Write a C program that reads the hours an employee worked in a week, 
computes the gross pay and income tax, and prints the gross pay, income tax and net pay on the screen. 
Assume that the pay structure and tax rate are given as follows: 
(1) the basic pay rate is $6.00 per hour; 
(2) the over-time pay rate (in excess of 40 hours) is one and a half time of the basic pay rate; and 
(3) the tax rate is 10\% of the first $1000 of the gross pay, 20\% of the next $500 and 30% of the rest.
*/

#include <stdio.h>
int main()
{
    int hours;
    float tax, grossPay, netPay;

    printf("Enter hours of work: \n");
    scanf("%d", &hours);

    /* Write your program code here */
    grossPay = 0.0;
    tax = 0.0;
    netPay = 0.0;

    if (hours > 40)
    {
        grossPay = 40 * 6.0;
        grossPay += (hours - 40) * (6.0 * 1.5);
    }
    else
    {
        grossPay = hours * 6.0;
    }

    if (grossPay <= 1000)
    {
        tax += (0.1 * grossPay);
    }
    else if (grossPay > 1000 && grossPay <= 1500)
    {
        tax += (0.1 * 1000);
        tax += (0.2 * grossPay - 1000);
    }
    else
    {
        tax += (0.1 * 1000);
        tax += (0.2 * 500);
        tax += (0.3 * grossPay - 1500);
    }

    netPay = grossPay - tax;

    printf("Gross pay = %.2f\n", grossPay);
    printf("Tax = %.2f\n", tax);
    printf("Net pay = %.2f\n", netPay);
    return 0;
}