/*
The salary scheme for a company is given as follows:
    Salary range for grade A: $700 - $899
    Salary range for grade B: $600 - $799
    Salary range for grade C: $500 - $649

In addition, a person whose salary is between $600 and $649 is in grade C if his merit points are below 10, 
otherwise he is in grade B. 

A person whose salary is between $700 and $799 is in grade B if his merit points are below 20, 
otherwise he is in grade A. 

Write a program to read in a person’s salary and his merit points, and displays his grade.
*/

#include <stdio.h>
int main()
{
    int salary, merit;

    printf("Enter the salary: \n");
    scanf("%d", &salary);
    printf("Enter the merit: \n");
    scanf("%d", &merit);

    /* Write your program code here */
    char grade = 'X';

    switch (salary)
    {
    case 800 ... 899:
        grade = 'A';
        break;
    case 700 ... 799:
        if (merit < 20)
            grade = 'B';
        else
            grade = 'A';
        break;
    case 650 ... 699:
        grade = 'B';
        break;
    case 600 ... 649:
        if (merit < 10)
            grade = 'C';
        else
            grade = 'B';
        break;
    case 500 ... 599:
        grade = 'C';
        break;
    }

    printf("The grade: %c", grade);

    return 0;
}