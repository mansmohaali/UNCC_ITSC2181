#include <stdio.h> 


int main(void) 
{ 
   int array[12] = {1, 0, 3, 0, 0, 0, 7, 0, 0, 0, 0, 0};
    int sum = 0;
    int i;
   for(i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("Element at index %d is %d\n", i, array[i]);
        sum = sum + array[i];
   }

   printf("The sum of all the element is %d\n", sum);

   return 0;

} 

/*

Provide the C code to do the following:

Declare and initialize a 1-D array with 12 int elements.

Set the values of the 1st, 3rd, and 7th elements to 1, 3, and 7 respectively.

Set the value of the remaining elements to zero (0).

Write a for loop that displays the contents of the array that you declared in the previous step.

Write a for loop that adds the contents of the same array and displays the result. 
For example, if the contents of the array are {1, 2, 3}, the output should be 6.
*/