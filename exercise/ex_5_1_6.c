#include <stdio.h>
#include <stdlib.h>

void foo(int n, int a[n], int *sum, int *largest);

int main(){

    int arraySize = 10;
    int array = {123, 3214, 213, 312, 213, 1235, 525, 525, 25, 24315}; 
    int sum = 0;
    int largest = 0;
    //void(&arraySize, &array, *)
    return 0;
}

void foo(int n, int a[n], int *sum, int *largest){
    *sum;
    *largest;

    for (int i = 0; i < n; i++){
        if (*largest <= i){
            *largest = a[i];
        }
        *sum = *sum + a[i];
    }
}