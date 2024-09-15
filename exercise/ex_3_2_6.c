#include <stdio.h> 


int main(void) 
{ 
    char string[] = "UNC Charlotte";
    int i;
    for(i = 0; i < (sizeof(string)/sizeof(char)) - 1; i++){
        printf("%c\n", string[i]);
    }

    return 0;

} 
