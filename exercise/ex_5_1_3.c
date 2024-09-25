#include <stdio.h>
#include <stdlib.h>

int main(){

    float *stock_prices = malloc(500);
    *stock_prices = 103.1223;
    stock_prices[1] = 123.31;
    stock_prices[2] = 123.31;
    *(stock_prices + 3) = 123.31;
    stock_prices[4]  = 123.31;

    free(stock_prices);

    for(int i  = 0; i < 5; i++){
        printf("i = %f", *(stock_prices +i));
    }
    return 0;
}