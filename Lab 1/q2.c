/*Write a C program that reads in several lines of non‐negative integer numbers,
computes the average for each line and prints out the average. The value –1 in each line
of user input is used to indicate the end of input for that line.*/

#include<stdio.h>
int main(){
    int noOfLines;
    printf("Enter number of lines:\n");
    scanf("%d",&noOfLines);

    int i;
    for(i = 0; i<noOfLines; i++){
        printf("Enter line %d:\n", i+1);
        int currentNumber = 0;
        int total = 0;
        int numberCount = 0;
        
        scanf("%d", &currentNumber);
        while(currentNumber != -1){
            total += currentNumber;
            numberCount++;
            scanf("%d", &currentNumber);
        }
        
        float average = (float)total/(float)numberCount;
        printf("Average = %0.2f\n", average);
    }
    return 0;
}