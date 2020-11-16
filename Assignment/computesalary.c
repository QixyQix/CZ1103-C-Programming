/*Write a C program that determines the gross pay for each employee in a company. The company
pays “straight-time” for the first 160 hours worked by each employee for four weeks and pays
“time-and-a-half” for all hours worked in excess of 160 hours. You are given a list of employee
Ids (an integer), the number of hours each employee worked for the four weeks, and the hourly
rate of each employee. The program should input this information for each employee, then
determine and display the employee’s gross pay. The sentinel value of –1 is used for the employee
id to indicate the end of input. Your program should include three functions, apart from the main()
function, to handle the input, and the computation of the gross pay. The function prototypes for the
functions are given as follows: 

void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);

The function computeSalary1() uses call by value for returning the result to the calling function.
The function computeSalary2() uses call by reference to pass the result through the pointer
parameter, grossPay, to the caller.
A sample program template is given below to test the functions: */

#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);
int main()
{
    int id = -1, noOfHours, payRate;
    double grossPay;

    readInput(&id, &noOfHours, &payRate);
    while (id != -1)
    {
        printf("computeSalary1(): ");
        grossPay = computeSalary1(noOfHours, payRate);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        printf("computeSalary2(): ");
        computeSalary2(noOfHours, payRate, &grossPay);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        readInput(&id, &noOfHours, &payRate);
    }
    return 0;
}
void readInput(int *id, int *noOfHours, int *payRate)
{
    printf("Enter ID (-1 to end):\n");
    scanf("%d", id);
    if (*id != -1)
    {
        printf("Enter number of hours:\n");
        scanf("%d", noOfHours);
        printf("Enter hourly pay rate:\n");
        scanf("%d", payRate);
    }
}
double computeSalary1(int noOfHours, int payRate)
{
    if (noOfHours > 160)
    {
        return (160 * payRate) + ((noOfHours - 160) * (payRate * 1.5));
    }
    else
    {
        return (double)noOfHours * payRate;
    }
}
void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
    if (noOfHours > 160)
    {
        *grossPay = (160 * payRate) + ((noOfHours - 160) * (payRate * 1.5));
    }
    else
    {
        *grossPay = (double)noOfHours * payRate;
    }
}
