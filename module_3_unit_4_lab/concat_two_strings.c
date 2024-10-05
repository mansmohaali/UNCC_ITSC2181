#include <stdio.h>
#include <stdlib.h>

char *concatenate(const char *string1, const char *string2);

int main(int argc, const char * argv[]) {
    char str1[] = "The United States";
    char str2[] = "of America";
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    char *str3 = concatenate(str1, str2);
    if (str3 != NULL) {
        printf("\nThe two strings concatenated: %s\n", str3);
        free(str3); // Free allocated memory
    } else {
        printf("\nError concatenating strings.\n");
    }
    char str4[] = "The University of North Carolina";
    char str5[] = "at Charlotte";
    printf("\nFirst string: %s\n", str4);
    printf("Second string: %s\n", str5);
    char *str6 = concatenate(str4, str5);
    if (str6 != NULL) {
        printf("\nThe two strings concatenated: %s\n", str6);
        free(str6); // Free allocated memory
    } else {
        printf("\nError concatenating strings.\n");
    }
    return 0;
}

char *concatenate(const char *string1, const char *string2){

    int lenght_string1 = 0, lenght_string2 = 0;

    while(string1[lenght_string1] != '\0'){
        lenght_string1++;
    }
    while(string2[lenght_string2] != '\0'){
        lenght_string2++;
    }

    char *result = malloc(lenght_string1 + lenght_string2 + 2);
    if (result == NULL) {
        printf("\n ERROR IN concatrnate function.\n");
    }

    for (int i = 0; i < lenght_string1; i++){
        result[i] = string1[i];
    }

    result[lenght_string1] = ' ';

    for (int i = 0; i < lenght_string2; i++){
        result[i + 1 + lenght_string1] = string2[i];
    }

    result[lenght_string1 + 1 + lenght_string2] = '\0';
    
    return result;
}

