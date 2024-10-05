#include <stdio.h>
#include <stdlib.h>

int* print_binary_value(int number);

int main(){
    int num1 = 2323;
    int num2 = 2327;
    

    // printing the binary value of the decimals
    int* binary_value1 = print_binary_value(num1);
    printf("The binary value of %d is /b", num1);
    for (int i = 0; i < 32; i++){
        printf("%d", binary_value1[i]);
    }
    printf("\n");

    int* binary_value2 = print_binary_value(num2);
    printf("The binary value of %d is /b", num2);
    for (int i = 0; i < 32; i++){
        printf("%d", binary_value2[i]);
    }
    printf("\n");

    // AND 
    int and_result = num1 & num2;
    int* bitwise_and_result = print_binary_value(and_result);
    printf("The binary value of the AND bitwise between %d and %d is /b", num1, num2);
    for (int i = 0; i < 32; i++){
        printf("%d", bitwise_and_result[i]);
    }
    printf("\n");

    // OR
    int or_result = num1 | num2;
    int* bitwise_or_result = print_binary_value(or_result);
    printf("The binary value of the OR bitwise between %d and %d is /b", num1, num2);
    for (int i = 0; i < 32; i++){
        printf("%d", bitwise_or_result[i]);
    }
    printf("\n");

    // XOR
    int xor_result = num1 ^ num2;
    int* bitwise_xor_result = print_binary_value(xor_result);
    printf("The binary value of the XOR bitwise between %d and %d is /b", num1, num2);
    for (int i = 0; i < 32; i++){
        printf("%d", bitwise_xor_result[i]);
    }
    printf("\n");

    // Freeing all alocated memory
    free(binary_value1);
    free(binary_value2);
    free(bitwise_and_result);
    free(bitwise_or_result);
    free(bitwise_xor_result);

    // return 
    return 0;
}

int* print_binary_value(int number){

    int* binary_value = (int*)malloc(32 * sizeof(int));
    if (binary_value == NULL) {
        printf("Memory allocation failed\n");
    }

    for (int i = 31; i >= 0; i--){
        binary_value[i] = 0;
        binary_value[i] = number % 2;
        number = number / 2;
    }
    
    return binary_value;   
}
