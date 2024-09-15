#include <stdio.h> 


int main(void) 
{ 
    float array[5];
    int i;
    for(i = 0; i < sizeof(array)/sizeof(float); i++){
        printf("Enter %d element : ", i+1);
        scanf("%f", &array[i]);
    }

    float sum = 0;
    int j;
    for(j = 0; j < sizeof(array)/sizeof(float); j++){
        sum = sum + array[j];
    }
    float average = (sum / j);
    printf("The average of all the element is %.2f\n", average);

    return 0;

} 
