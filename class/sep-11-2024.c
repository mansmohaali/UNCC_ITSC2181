#include <stdio.h>

void addFive(int *someValue) { // *someValue == someValue[]
    someValue[0] = someValue[0] + 5;
}


int main(){

    int otherArray[] = {2123, 15, 326, 326, 623};

    printf("The first element is %d\n", otherArray[0]);
    printf("The first element is %d\n", *otherArray);
    printf("The second element is %d\n", otherArray[1]);
    printf("The second element is %d\n", *(otherArray + 1));

    char someLetter = 'B';
    char *pointerToSomeLetter = &someLetter;

    printf("The value of pointerToSomeLetter is %p\n", pointerToSomeLetter);
    printf("The value of pointerToSomeLetter plus 1 is %p\n", pointerToSomeLetter + 1);

    int mInt = 100;
    int *pointerToMInt = &mInt;

    printf("The value of pointerToSomeLetter is %p\n", pointerToMInt);
    printf("The value of pointerToSomeLetter plus 1 is %p\n", pointerToMInt + 1);
    return 0;

    int array[] = {12, 31, 532, 4552};
    printf("The first value of the array is %d\n", *array); // array[0] == *array

    return 0;

    int num = 100;
    int *pointerToNum = &num;
    printf("The value of num which pointerToNum is %d\n", pointerToNum[0]); 
    /* The star "*" represent in this case, asking for the pointer of that point to num
    */

    addFive(&num);
    printf("The value of num after adding five is: %d\n", num);

    printf("The address of num is %p\n", &num);
    printf("The address of num is %p\n", pointerToNum); 
    // no need for looking for pointerToNum[1] because it look for the next value which may or may not exist

    int numbers[10];
    /* 1. Space gets allocted (40 bytes)
       2. A pointer get created:
       that points to the first byte out of the 40 bytes
       pointing to the 1st means containing address of the 1st byte

       3. the square bracket bassically
    */
}
