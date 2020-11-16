/*
Write a C program that prints the ID and grade of each student in a class. 
The input contains the student IDs and their marks. 
The range of the marks is from 0 to 100. 
The relationships of the marks and grades are given below:

Grade                     Mark
A                         100-75
B                         74-65
C                         64-55
D                         54-45
F                         44-0

Use the sentinel value –1 for student ID to indicate the end of user input.

Write the program using the switch statement.
*/

#include <stdio.h>
int main() 
{
   /* insert variable declarations here */   
   int mark,studentNumber;
   char grade;
   
   studentNumber = 0;
   while (studentNumber != -1) 
   {
       printf("Enter Student ID: \n");
        scanf("%d", &studentNumber);
        
        if(studentNumber != -1){
           mark = 0;
           printf("Enter Mark:\n");
           scanf("%d",&mark);
           
           switch(mark){
                case 75 ... 100:
                   grade = 'A';
                   break;
                case 65 ... 74:
                   grade = 'B';
                   break;
                case 55 ... 64:
                    grade = 'C';
                    break;
                case 45 ... 54:
                    grade = 'D';
                    break;
                default:
                    grade = 'F';
                    break;
           }
           printf("Grade = %c\n",grade);
        }

   }
   return 0;
}