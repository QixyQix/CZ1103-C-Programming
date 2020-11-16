/*
Write a function that accepts an integer numOfLines as parameter, reads in specified
number of lists of numbers according to numOfLines, one list per line, computes the
total for each list and displays the total on the screen. For each list of numbers, the first
number indicates how many elements are in the list. Your function does not need to check
user input errors.
The function prototype is given below:
void computeTotal(int numOfLines);
A sample program is given below to test the function: 
*/

#include <stdio.h>
void computeTotal(int numOfLines);
int main()
{
    int numOfLines;
    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}
void computeTotal(int numOfLines)
{
    int i;
    for(i = 0; i<numOfLines;i++){
        int totalVal = 0;
        int currInput = 0;
        int noOfItems = 0;
        int j;
        printf("Enter line %d:\n",i+1);
        
        scanf("%d",&noOfItems);

        for(j = 0; j<noOfItems; j++){
            scanf("%d",&currInput);
            totalVal += currInput;
        }

        printf("Total: %d\n", totalVal);
    }
}