/*Write a C function that compares the string pointed to by s1 to the string pointed to by s2. If
the string pointed to by s1 is greater than, equal to, or less than the string pointed to by s2,
then it returns 1, 0 or –1 respectively. Write the code for the function without using any of
the standard C string library functions. The function prototype is given as follows:  

int stringcmp(char *s1, char *s2);*/
#include<stdio.h>
#define MAX 100
int stringcmp(char *s1, char *s2);

void main(){
    char str1[MAX], str2[MAX];

    printf("Enter string 1:\n");
    scanf("%s",&str1);

    printf("Enter string 2:\n");
    scanf("%s", &str2);

    printf("Result: %d\n", stringcmp(str1, str2));
}

int stringcmp(char *s1, char *s2){
    int index = 0;
    int result;
    //Checking of each character, accounts for if length of s1>s2
    while(*s1 != '\0'){
        if(*s1 > *s2){
            return 1;
        }else if(*s1 < *s2)
        {
            return -1;
        }
        s1++;
        s2++;
    }
    //If s2's length is larger
    if(*s2 !='\0'){
        return -1;
    }
    //All match
    return 0;
}
