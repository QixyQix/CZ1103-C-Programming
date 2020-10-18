/*Q4.(reverseAr1D) Write a C function printReverse() that prints an array of integers in
reverse order. For example, if ar[5] = {1,2,3,4,5}, then the output 5,4,3,2,1 will be printed
after applying the function printReverse(). The function prototype is given as follows:
void printReverse(int ar[], int size);
where size indicates the size of the array.  

Write two versions of printReverse(). One version printReverse1() uses the index
notation and the other version printReverse2() uses the pointer notation for accessing
the element of each index location.  

In addition, Write a C function reverseAr1D() that takes in an array of integers ar and an
integer size as parameters. The parameter size indicates the size of the array to be
processed. The function converts the content in the array in reverse order and passes
the array to the calling function via call by reference.
void reverseAr1D(int ar[ ], int size);

A sample program template is given below for testing the functions:*/

#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
   int ar[80];
   int size, i;
       
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i <= size-1; i++)
      scanf("%d", &ar[i]);
   printReverse1(ar, size);    
   printReverse2(ar, size);
   reverseAr1D(ar, size);
   printf("reverseAr1D(): ");
   if (size > 0) {
      for (i=0; i<size; i++)
         printf("%d ", ar[i]);
   }
   return 0;
}    
void printReverse1(int ar[], int size)  
{
   int i;
   /*
   Note how i is instantiated as 1 and i is compared to size using <= instead of <
   This is to account for the max. index of the array being 0 to size-1
   */
   for(i = 1; i<=size; i++){
      printf("%d ", ar[size-i]);
   }
}
void printReverse2(int ar[], int size)
{
   int* arPtr;
   arPtr = ar;
   /*
   1. Set the pointer to the end of the array
   2. If the pointed address is larger than or equal to the address of the first element i.e. ar
   3. Print the value of the pointer
   4. Decrease pointer pointed address by 1, moving towards the beginning of the array
   */
   for(arPtr += (size-1); arPtr >= ar; arPtr--){
      printf("%d ", *arPtr);
   }
   
}
void reverseAr1D(int ar[ ], int size)
{
   /*
   If we reverse the array, the middle element will always be the same.
   Hence we use a int/floor division of 2 to obtain the floor of the no. of swaps needed

   1 2 3 4 5 ==> 5 4 3 2 1, notice how 3's position does not change, but the others are swapped, 2 swaps needed.
   1 2 3 4 ==> 4 3 2 1, no middle element, all the elements positions change, 2 swaps needed as well.

   i.e. if 2.5 swaps needed, 2 swaps are only needed
   */
   int swapsRequired = size/2;

   /*
   Swap the elements around. Use the iterator, controlled by no. of swaps to determine the position
   of the elements that need to be swapped.

   i.e.
   i is 0, we swap ar[0] and ar[size-(0+1)] (swapping 1st and last element)
   i is 1, we swap ar[1] and ar[size-(1+1)] (swapping 2nd and 2nd last element)
   
   Since the array is a pointer to the 1st element, modifying the array's value will modify the values in
   the array itself. (i.e. no return statement required)
   */
   int i;
   for(i = 0; i < swapsRequired; i++){
      int temp = ar[i];
      int endIndex = size-(i+1);
      ar[i] = ar[endIndex];
      ar[endIndex] = temp;
   }
}