/*
They thought it's a good idea to put everything into a PDF file, and have us copy and paste the code.
Except that all of the spaces disappear when you paste it, and everything gets pasted as 1 line.
This was painful to convert. Thank me later.
*/
#include<stdio.h>

/*functionprototypes*/
int numDigits1(int num);
int digitPos1(int num,int digit);
int square1(int num);
void numDigits2(int num,int *result);
void digitPos2(int num,int digit,int *result);
void square2(int num,int *result);

int main(){
    int choice;
    int number,digit,result=0;
    do{
        printf("\nPerform the following functions ITERATIVELY:\n");
        printf("1: numDigits1()\n");
        printf("2: numDigits2()\n");
        printf("3: digitPos1()\n");
        printf("4: digitPos2()\n");
        printf("5: square1()\n");
        printf("6: square2()\n");
        printf("7: quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            //Dear god what the hell is this for a template? Disgusting.
            case 1:
                printf("Enter the number:\n");
                scanf("%d",&number);
                printf("numDigits1():%d\n",numDigits1(number));
                break;
            case 2:
                printf("Enter the number:\n");
                scanf("%d",&number);
                numDigits2(number,&result);
                printf("numDigits2():%d\n",result);
                break;
            case 3:
                printf("Enter the number:\n");
                scanf("%d",&number);
                printf("Enter the digit:\n");
                scanf("%d",&digit);
                printf("digitPos1():%d\n",digitPos1(number,digit));
                break;
            case 4:
                printf("Enter the number:\n");
                scanf("%d",&number);
                printf("Enter the digit:\n");
                scanf("%d",&digit);
                digitPos2(number,digit,&result);
                printf("digitPos2():%d\n",result);
                break;
            case 5:
                printf("Enter the number:\n");
                scanf("%d",&number);
                printf("square1():%d\n",square1(number));
                break;
            case 6:
                printf("Enter the number:\n");
                scanf("%d",&number);
                square2(number,&result);
                printf("square2():%d\n",result);
                break;
            default:
                printf("Program terminating.....\n");
                break;
        }
    }while(choice<7);
    return 0;
}

/*add function code here*/
int numDigits1(int num){
    int count=0;
    do{
        count++;
        num=num/10;
    }while(num>0);
    return count;
}

/*
Q1 - Write a function numDigits2 that has the same functionality as numDigits1.
Except the result is passed back via the use of pointers
*/
void numDigits2(int num,int *result){
    *result=0;
    /*Writeyourcodehere*/
    do{
        (*result)++;
        num/=10;
    }while(num>0);
}

/*
Q2 - Write the function digitPos1() that returns the position of the first appearance of a
specified digit in a positive number. The position of the digit is counted from the right and
starts from 1.If the required digit is not in the number, the function should return 0.
*/
int digitPos1(int num,int digit){
    /*Writeyourcodehere*/
    int pos = 0;
    do{
        pos++;
        int currDigit = num%10;
        if(currDigit == digit){
            return pos;
        }
        else{
            num/=10;
        }
    }while(num != 0);
    return 0;
}

void digitPos2(int num,int digit,int *result){
    int pos=0;
    *result=0;
    do{
        pos++;
        if(num%10==digit){
            *result=pos;
            break;
        }
        num=num/10;
    }while(num>0);
}

/*
Q3 - Write a function square1() that returns the square of a positive integer number num, by computing the sum of odd integers 
starting with 1 as shown in the example below. The result is returned to the calling function. 
For example, if num=4, then 4^2=1+3+5+7=16 is returned; if num=5,then 5^2=1+3+5+7+9=25 is returned.

Write another function square2() that returns the result via pointer
*/

int square1(int num){
    /*Writeyourcodehere*/
    int i, result = 0;

    for(i=0; i<num;i++){
        result += i*2+1;
    }
    return result;
}

void square2(int num, int *result){
    /*Writeyourcodehere*/
    *result = 0;
    int i;

    for(i=0; i<num; i++){
        *result += i*2+1;
    }
}

