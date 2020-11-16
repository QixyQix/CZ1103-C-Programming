/*
A square matrix (2-dimensional array of equal dimensions) can be reduced to upper-triangular form 
by setting each diagonal element to the sum of the original elements in that column and setting to 0s 
all the elements below the diagonal.  
For example, the 4-by-4 matrix:

    4   3   8   6

    9   0   6   5

    5   1   2   4

    9   8   3   7

would be reduced to

     27   3   8   6

     0   9   6   5

     0   0   5   4

     0   0   0   7

Write a function reduceMatrix2D() to reduce a matrix with dimensions of rowSize and colSize. The prototype of the function is:

    void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);   

Write a C program to test the function.
*/

#include <stdio.h>
#define SIZE 10
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &ar[i][j]);

    reduceMatrix2D(ar, rowSize, colSize);
    printf("reduceMatrix2D(): \n");
    display(ar, rowSize, colSize);
    return 0;
}
void display(int ar[][SIZE], int rowSize, int colSize)
{
    int l, m;
    for (l = 0; l < rowSize; l++)
    {
        for (m = 0; m < colSize; m++)
            printf("%d ", ar[l][m]);
        printf("\n");
    }
}
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
    /* Write your program code here */
    int i;
    for (i = 0; i < rowSize; i++)
    {
        int total = 0;
        int j;
        for (j = i; j < rowSize; j++)
        {
            total += ar[j][i];
            ar[j][i] = 0;
        }
        ar[i][i] = total;
    }
}