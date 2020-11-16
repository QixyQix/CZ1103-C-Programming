/*Write a C program for the following functions that work on arrays which can store up to 10
integers:

(1) void insert(int max, int *size, int ar[], int num);
This function inserts the number num into the array ar where the pointer parameter
size stores the number of integers in ar. Before and after the function call, ar is an
array of integers in ascending order. max is the maximum number of integers which
can be stored in ar. This means that the function should issue an error message "The
array is full\n" and no insertion should be done if *size is equal to max
before insertion. 

(2) void iremove(int *size, int ar[], int num);
This function removes the first appearance of the number num from the array ar
which has *size numbers in it. Before and after the function call, ar is an array of
integers in ascending order. Please note:
- After the number is removed, the message "The integer is removed\n"
should be displayed.
- If *size is equal to zero, the error message "The array is empty\n"
should be displayed.
- If num does not appear in ar, the function should issue an error message "The
number is not in the array\n". 

(3) void initialize(int *size, int ar[]);
This function reads in a specified number of integers and uses insert() to store
them in ar. The pointer parameter size returns the actual number of integers stored in
ar, and ar will be an array of integers in ascending order. 

(4) void display(int size, int ar[]);
This function prints the numbers stored in ar. size gives the number of integers
stored in ar.

A sample program template is given below for testing the functions: */
#include <stdio.h>
#define MAX 10
void initialize(int *size, int ar[]);
void insert(int max, int *size, int ar[], int num);
void iremove(int *size, int ar[], int num);
void display(int size, int ar[]);
int main()
{
    int option = 0;
    int num, ar[MAX], size = 0;

    printf("Please select an option: \n");
    printf("(1) Initialize the array \n");
    printf("(2) Insert an integer \n");
    printf("(3) Remove an integer \n");
    printf("(4) Display the numbers stored in the array \n");
    printf("(5) Quit \n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            initialize(&size, ar);
            break;
        case 2:
            printf("Enter an integer: \n");
            scanf("%d", &num);
            insert(MAX, &size, ar, num);
            break;
        case 3:
            printf("Enter the integer to be removed: \n");
            scanf("%d", &num);
            iremove(&size, ar, num);
            break;
        case 4:
            display(size, ar);
            break;
        default:
            break;
        }
    } while (option < 5);
    return 0;
}
void display(int size, int ar[])
{
    int i;

    printf("The %d numbers in the array: \n", size);
    for (i = 0; i < size; i++)
        printf("%d ", ar[i]);
    printf("\n");
}
void initialize(int *size, int ar[])
{
    int total, i, num;
    printf("Enter the total number of integers (MAX=%d): \n", MAX);
    scanf("%d", &total);
    (*size) = 0;
    printf("Enter the integers: \n");
    for (i = 0; i < total; i++)
    {
        scanf("%d", &num);
        insert(MAX, size, ar, num);
    }
}
void insert(int max, int *size, int ar[], int num)
{
    if ((*size) == MAX)
    {
        printf("The array is full\n");
    }
    else
    {
        //Determine appropriate index
        int i, index;

        //Presume the element should be inserted at the end
        index = *size;
        //Determine the intermediate index if necessary
        for (i = 0; i < (*size); i++)
        {
            if (ar[i] >= num)
            {
                index = i;
                break;
            }
        }
        //Increment the size of array
        (*size)++;
        //Shift the elements back to insert intermediate element
        for (i = (*size - 1); i > index; i--)
        {
            ar[i] = ar[i - 1];
        }
        //Set determined index to the num
        ar[index] = num;
    }
}
void iremove(int *size, int ar[], int num)
{
    if (*size == 0)
    {
        printf("The array is empty\n");
    }
    else
    {
        //determine index of item to be removed
        int i, index;
        index = -1;
        for (i = 0; i < *size; i++)
        {
            if (ar[i] == num)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            printf("The number is not in the array\n");
        }
        else
        {
            //Decrement the size of the array
            (*size)--;
            //Shift the elements down to fill in the gap
            for (i = index; i < (*size); i++)
            {
                ar[i] = ar[i + 1];
            }
            printf("The integer is removed\n");
        }
    }
}
