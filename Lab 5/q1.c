/*
Write a C program that implements the phoebook management system with the following three
functions:

1. The function readin() reads a number of persons’ names and their corresponding
telephone numbers, passes the data to the caller via the parameter p, and returns the
number of names that have entered. The character '#'  is used to indicate the end of
user input.  

2. The function printPB() prints the phonebook information on the display. It will print the
message “Empty phonebook“ if the phonebook list is empty.

3. The function search() finds the telephone number of an input name target, and then
prints the name and telephone number on the screen. If the input name cannot be
found, then it will print an appropriate error message. The prototypes of the two
functions are given below:


The prototypes of the three functions are given below:
    void printPB(PhoneBk *pb, int size);
    int readin(PhoneBk *pb);
    void search(PhoneBk *pb, int size, char *target);
The structure definition for PhoneBk is given below:
  
typedef struct {
   char name[20]; // a string
   int telno;    // an integer with 5 digits
} PhoneBk;
A sample program template is given below to test the functions:
*/

#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char name[20];
    int telno;
} PhoneBk;
void printPB(PhoneBk *pb, int size);
int readin(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);
int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size = 0, choice;
    char dummychar;

    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%c", &dummychar);
            size = readin(s);
            break;
        case 2:
            scanf("%c", &dummychar);
            printf("Enter search name: \n");
            fgets(t, 20, stdin);
            if (p = strchr(t, '\n'))
                *p = '\0';
            search(s, size, t);
            break;
        case 3:
            printPB(s, size);
            break;
        }

    } while (choice < 4);
    return 0;
}
void printPB(PhoneBk *pb, int size)
{
    printf("The phonebook list:\n");
    if(size < 1){
        printf("Empty phonebook\n");
    }else
    {
        int i;
        for(i = 0; i<size; i++){
            PhoneBk *ptr = pb+i;
            printf("Name: %s\n",ptr->name);
            printf("Telno: %d\n",ptr->telno);
        }
    }
    
}
int readin(PhoneBk *pb)
{
    int size = 0;
    char name[20] = "";
    char dummyChar;
    while(1){
        *name = '\0';
        int telno = 0;
        PhoneBk *recordPtr;

        char *p;
        printf("Enter name:\n");
        fgets(name, 20, stdin);
        //Because fgets() reads in the \n char when enter is hit, we need to find the \n character and replace it
        //with a terminating null character
        if(p=strchr(name,'\n')) *p = '\0';
        
        if(strcmp(name, "#") == 0) break;

        printf("Enter tel:\n");
        scanf("%d", &telno);
        //Because when you hit enter, a '\n' char is appended.
        //This is to catch the '\n', so that it wont "skip" the fgets on the next iteration
        scanf("%c", &dummyChar);

        recordPtr = pb+size;

        strcpy(recordPtr->name, name);
        recordPtr->telno = telno;

        size++;
    }
    return size;
}
void search(PhoneBk *pb, int size, char *target)
{
    int i;
    for(i = 0; i<size; i++){
        PhoneBk *ptr = pb+i;
        if(strcmp(ptr->name, target) == 0){
            printf("Name = %s, Tel = %d\n", ptr->name,ptr->telno);
            return;
        }
    }
    printf("Name not found!\n");
}
