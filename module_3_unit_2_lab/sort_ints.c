#include <stdio.h>

int insertion_sort(int array[]);

int main(){
    printf("Please enter 10 integers separated by a space:\n");
    int array[10];
    for(int i = 0; i < 10; i++) scanf("%d", &array[i]);
    //for(int i = 0; i < 10; i++) printf("%d ", array[i]);
    insertion_sort(array);
    return 0;
}

int insertion_sort(int array[]){
    int temp;
    int i;
    for(i = 1; i < 10; i++){
        temp = array[i];
        int j = i -1;
        while(j >= 0 && array[j] > temp){
            array[j + 1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    printf("The list after sorting:\n");
    for(int i = 0; i < 10; i++) printf("%d ", array[i]);
    printf("\n");
    return 0;
}