#include <stdio.h>
#include <ctype.h>

void capitalize(char *str);

int main(){
    char the_str[] = "test";
    capitalize(the_str);
    printf("%s\n", the_str); // Expected Output: TEST
    char the_str2[] = "This IS a tesT!";
    capitalize(the_str2);
    printf("%s\n", the_str2); // Expected Output: THIS IS A TEST!
    
}

void capitalize(char *str){

    for (int i = 0; i < sizeof(str); i++){
        if(isalpha(str[i])){
            str[i] = toupper(str[i]);
        }
    }

    /*for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) ) {
            str[i] = toupper(str[i]); // Convert character to uppercase if it's alphabetic
        }
    }*/
}