#include <stdio.h>

int main(){
    float PI = 3.14159;
    float radius, height;
    printf("Enter radius:\n"); 
    scanf("%f", &radius);
     printf("Enter height:\n"); 
    scanf("%f", &height);

    float volume = (PI*radius*radius*height);

    printf("Volume: %.2f\n", volume);

    return 0;
    

}
