#include <stdio.h> 

int cube_volume(float); 

int main(void){ 
    float volume = cube_volume(234.24); 
    printf("Product=%.2f\n", volume); 
    return 0;
} 

int cube_volume(float x){
    return (x*x*x); 
}