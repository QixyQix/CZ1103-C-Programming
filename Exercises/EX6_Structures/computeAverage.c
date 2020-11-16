/*
Write a C function average() that creates a database of maximum 50 students using an array of structures. 
The function reads in student name. For each student, it takes in the test score and exam score. 
Then it computes and prints the total score of the student. The input will end when the student name is “END”. 
Then, it computes and returns the average score of all students to the calling function (i.e. main()). 
The calling function then prints the average score on the display. The function prototype is given below:

    double average();

Write a C program to test the function.
*/

#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
   printf("average(): %.2f\n", average());           
   return 0;
}
double average()
{
   /* Write your program code here */
   struct student students[50];
   int index = 0;
   
   while(1){
       char studName[20];
       char *p;
       double studTScore = 0.0;
       double studEScore = 0.0;
       
       printf("Enter student name:\n");
       fgets(studName, 20, stdin);
       if(p=strchr(studName,'\n'))*p='\0';
       
       if(strcmp(studName, "END") == 0){
           break;
       }
       
      printf("Enter test score:\n");
      scanf("%lf",&studTScore);
      scanf("\n");
       
      printf("Enter exam score:\n");
      scanf("%lf",&studEScore);
      scanf("\n");
      
      //Insert into array
      strcpy((students+index)->name, studName);
      (students+index)->testScore = studTScore;
      (students+index)->examScore = studEScore;
      (students+index)->total = (studTScore+studEScore)/2;
       
      printf("Student %s total = %.2f\n", (students+index)->name, (students+index)->total);
       
      index++;
   }
   
   
   //Compute Average
  int i;
  double total = 0.0;
  for(i = 0; i < (index+1); i++){
      total += (students+i)->total;
  }
   
   if(index == 0){
       return 0.0;
   }else{
       return total/(index);
   }
}