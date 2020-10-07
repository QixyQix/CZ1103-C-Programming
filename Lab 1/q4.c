/*Write a C program that computes the value of e^x according to the following formula:
e^x = 1 + x/1! + x^2/2!..... x^10/10!
*/

#include<stdio.h>
int computeFactorial(int number){
    int total = 1;
    int i;
    for(i = 0; i<number; i++){
        total *= i+1;
    }
    return total;
}

float computePower(float number, int power){
    float total = 1.0;
    int i;
    for(i = 0;i<power;i++){
        total *= number;
    }
}

int main(){
    float powerValue;
    printf("Enter  x:\n");
    scanf("%f",&powerValue);

    float total = 1.0;
    int i;
    for(i = 0; i<10; i++){
        int step = i+1;
        total += (float)computePower(powerValue, step)/(float)computeFactorial(step);
    }
    printf("Result = %0.2f", total);
    return 0;
}