#include<stdio.h>
int main(){
    int first,second;
    first = 1;
    second = 2;

    first -=second;
    second +=first;
    first = second-first;

    return 0;
}