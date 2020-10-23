/*Write a program which will draw the histogram for n integers from 0 to 99.  N is input by
the user.  Each of the n numbers will be generated by calling rand() % 100.  The program
will consist of two functions (i) to collect the frequency distribution of the numbers (ii) to
print the histogram.  An example histogram is shown here.

0 – 9 |*********************
10 – 19 |************
20 – 29 |*************
30 – 39 |**
......
90 – 99 |***************
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARRAYSIZE 10

int main(){
    int size = -1;
    int frequency[ARRAYSIZE] = {0,0,0,0,0,0,0,0,0,0};

    while(size < 0 || size > 100){
        printf("Enter the number number of integers (0-100): ");
        scanf("%d", &size);
    }

    //Collect the frequency
    int i,j, number;
    for(i = 0; i<size; i++){
        number = rand() % 100;
        frequency[number/10] ++;
    }

    //Print the histogram
    for(i = 0; i<ARRAYSIZE; i++){
        printf("%d - %d | ", (i*10), (i*10+9));
        for(j = 0; j < frequency[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}