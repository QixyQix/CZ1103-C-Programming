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

        switch(studentId){
            case -1:
                return 0;
                break;
            default:
                grade = 'X';
                printf("Enter mark:\n");
                scanf("%d", &inputMark);

                if(inputMark >= 75 && inputMark <= 100)
                {
                    grade = 'A';
                }
                else if (inputMark >= 65 && inputMark <=74)
                {
                    grade = 'B';
                }
                else if (inputMark >= 55 && inputMark <= 64)
                {
                    grade = 'C';
                }
                else if (inputMark >= 45 && inputMark <= 54)
                {
                    grade = 'D';
                }
                else if (inputMark >= 44 && inputMark <= 0)
                {
                    grade = 'F';
                }
                else
                {
                    printf("Invalid mark. Mark must be between 0-100. Please try again.\n");
                }
                
                if (grade != 'X'){
                    printf("Grade = %c\n", grade);
                }

        }
    }
    return 0;
}