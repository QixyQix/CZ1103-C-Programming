/*Write a C program that accepts a positive number height between 1 and 10 as its
parameter value, and prints a triangular pattern according to height. Note that only 1, 2
and 3 are used to generate the patterns. A sample input and output session when the
program is called is given below. For example, pattern(2) will print the following pattern:
1
22
333
*/

#include<stdio.h>
void pattern(int height){
    printf("Pattern:\n");
    int i,j;
    for(i =0; i<height; i++){
        for(j = 0; j<i+1; j++){
            printf("%d",i+1);
        }
        printf("\n");
    }
}

int main(){
    int height;
    printf("Enter height:\n");
    scanf("%d", &height);
    pattern(height);
}


