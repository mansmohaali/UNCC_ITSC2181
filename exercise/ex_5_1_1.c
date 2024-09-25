#include <stdio.h> 

int main(void){ 

    char c;
    int *p;
    c = *p;
    printf("Pointer: %p\n", &p);
    printf("Pointer: %c\n", c);
    return 0;
    int num;
    int *ptr = &num;
    ptr[0] = 100;

    float decimal;
    float *ptr1 = &decimal;
    *ptr1 = 3.1416;

    printf("Pointer: %p\n", &ptr);
    printf("Integer: %d\n", num);

    printf("Pointer: %p\n", &ptr1);
    printf("Integer: %f\n", decimal);

    return 0; 
} 

/*
Part 1
Declare a variable to store integer data.
Declare a pointer to integer data.
Using the pointer, set the value of the variable to 100.
Part 2
Declare a variable to store floating point data.
Declare a pointer to floating point data.
Using the pointer, set the value of the variable to 3.1416 
*/