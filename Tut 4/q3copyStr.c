/*Write the function strncpy() that copies not more than n characters (characters that follow a
null character are not copied) from the array pointed to by s2 to the array pointed to by s1.  
If the array pointed to by s2 is a string shorter than n characters, null characters are
appended to the copy in the array pointed to by s1, until n characters in all have been
written.  The strncpy returns the value of s1.  The function prototype is:  

char *strncpy(char * s1, char * s2, int n);*/


//NOTE: Renamed to cpyStr cause the warnings were getting annoying

#include<stdio.h>
#define MAX 100

char *cpyStr(char *s1, char* s2, int n);

void main(){
    char str1[MAX], str2[MAX];
    int charsToCpy;

    printf("Enter string 1:\n");
    scanf("%s", &str1);

    printf("Enter string 2:\n");
    scanf("%s", &str2);

    printf("Enter the number of characters to copy:\n");
    scanf("%d",&charsToCpy);

    printf("Copied string:\n");
    
    cpyStr(&str1[0], &str2[0], charsToCpy);
    puts(str1);
}

char *cpyStr(char *s1, char* s2, int n){
    char* writePtr = s1;
    //Traverse to end of s1 first
    while(*writePtr != '\0'){
        writePtr++;
    }

    //Start copying
    int i;
    int endOfs2Hit = 0;
    for(i = 0; i<n; i++){
        if(*(s2+i) == '\0'){
            endOfs2Hit = 1;
            *writePtr = '\0';
        }

        if(!endOfs2Hit){
            *writePtr = *(s2+i);
        }else{
            *writePtr = '\0';
        }
        writePtr++;
    }
    *writePtr = '\0';
    return s1;
}