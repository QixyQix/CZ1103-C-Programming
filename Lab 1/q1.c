/*Write a C program that prints the ID and grade of each student in a class. The input
contains the student IDs and their marks. The range of the marks is from 0 to 100. The
relationships of the marks and grades are given below:

Grade    Mark
A    100‐75
B    74‐65
C    64‐55
D    54‐45
F    44‐0

Use the sentinel value –1 for student ID to indicate the end of user input.  
Write the program using the switch statement.  
*/

#include <stdio.h>
int main(){
    int studentId;
    int inputMark;
    char grade;

    while(1){
        printf("Enter student ID:\n");
        scanf("%d", &studentId);

        if(studentId == -1){
            break;
        }

        grade = 'X';
        printf("Enter mark:\n");
        scanf("%d", &inputMark);
        
        switch (inputMark)
        {
        case 75 ... 100:
            grade='A';
            break;
        case 65 ... 74:
            grade='B';
            break;
        case 55 ... 64:
            grade='C';
            break;
        case 45 ... 54:
            grade='D';
            break;
        case 0 ... 44:
            grade = 'F';
            break;
        default:
            grade='X';
            printf("Invalid mark. Mark must be between 0-100. Please try again.\n");
            break;
        }

        if (grade != 'X'){
            printf("Grade = %c\n", grade);
        }
    }
    
    return 0;
}