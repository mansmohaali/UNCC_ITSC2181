#include <stdio.h>

int main(){

    int highestTemperature = -100;
    int highTempDay;
    int i = 0;
    printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
    for(i = 0; i < 10; i++){
        int inputTemperature;
        printf("Enter a high temperature: ");
        scanf("%d", &inputTemperature);
        if(inputTemperature >= highestTemperature){
            highestTemperature = inputTemperature;
            highTempDay = i +1;
        }
    }
    printf("The highest recorded temperature in the 10-day period was: %d degrees\nLast recorded on: Day %d\n", highestTemperature, highTempDay);
    return 0;
}