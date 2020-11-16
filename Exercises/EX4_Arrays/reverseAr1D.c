/*
Write a C function printReverse() that prints an array of integers in reverse order. 
For example, if ar[5] = {1,2,3,4,5}, then the output 5, 4, 3, 2, 1 
will be printed after applying the function printReverse(). 
The function prototype is given as follows:

    void printReverse(int ar[], int size);

where size indicates the size of the array.

Write two versions of printReverse(). 
One version (printReverse1) uses the index notation and the other version (printReverse2) 
uses the pointer notation for accessing the element of each index location.

In addition, Write a C function reverseAr1D() that takes in an array of integers ar and an integer size as parameters. The parameter size indicates the size of the array to be processed. The function converts the content in the array in reverse order and passes the array to the calling function via call by reference.

    void reverseAr1D(int ar[ ], int size);
*/

#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
    int ar[10];
    int size, i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i <= size - 1; i++)
        scanf("%d", &ar[i]);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0)
    {
        for (i = 0; i < size; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}
void printReverse1(int ar[], int size)
{
    /* using index – Write your program code here */
    int i;
    printf("printReverse1(): ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d", ar[i]);
        if ((i - 1) >= 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}
void printReverse2(int ar[], int size)
{
    /* using pointer – Write your program code here */
    int i;
    printf("printReverse2(): ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d", *(ar + i));
        if ((i - 1) >= 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}
void reverseAr1D(int ar[], int size)
{
    /* Write your program code here */
    int swapsNeeded = size / 2;
    int i;
    for (i = 0; i < swapsNeeded; i++)
    {
        int temp = ar[i];
        ar[i] = ar[size - (1 + i)];
        ar[size - (1 + i)] = temp;
    }
}