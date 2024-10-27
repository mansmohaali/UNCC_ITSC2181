#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char string_input_1[40] = "adsja?hjbhasj";
    char string_input_2[40] = "afsdjkk?jaasda?sdf";
    // Print the length of a string.
    printf ("The sentence entered is %u characters long for the first input.\n",(unsigned)strlen(string_input_1));
    printf ("The sentence entered is %u characters long for the second input.\n",(unsigned)strlen(string_input_2));
    // Write the code to concatenate two strings and print the result.
    printf("The combined strings is: %s\n", strcat(string_input_1, string_input_2));
    // Write the code to compare two strings and copy the lesser to the greater.
    char *concat_strings = malloc(sizeof(string_input_1) + sizeof(string_input_2)); 
    if(strlen(string_input_1) > strlen(string_input_2)){
        concat_strings = strcpy(string_input_2, string_input_1);
    } else {
        concat_strings = strcpy(string_input_1, string_input_2);
    }
    // Write the code to find how many times the character '?' occurs in a string.
    char *pch;
    int counter = 0;
    pch = strchr(concat_strings, '?');
    while(pch != NULL){
        pch=strchr(pch+1,'?');
        counter ++;
    }
    printf("The number of times '?' occurs is %d times.\n", counter);

    return 0;
}