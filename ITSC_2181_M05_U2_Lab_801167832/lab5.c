#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int item_quantity;
    float item_price;
    char item_name[];
} Item;

float parse_data(char string[]); 
void pretty_print(char item[], int total, float cost); 

int main(int argc, char *argv[]){

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file;

    file = fopen(argv[1], "r");
    if(file == NULL){
        printf("Unable to open the input file.\n");
        return 1;
    }

    char line[256];
    int total_items = 0;
    float total_cost = 0.0;


    while (fgets(line, sizeof(line), file)) {
        char item[50];
        int quantity;
        float cost_per_unit;

        //Parse the line to extract item data
        cost_per_unit = parse_data(line);
        sscanf(line, "%s %d %f", item, &quantity, &cost_per_unit);
        
        float subtotal = quantity * cost_per_unit;
        total_items ++;
        total_cost += subtotal;

        // Print item details
        pretty_print(item, quantity, cost_per_unit);
    }
    
    fclose(file);


    // Print total items and total cost
    printf("\n-----------------------------------------------------\n");
    printf("Total Items: %d\t\tTotal Cost: $%.2f\n", total_items, total_cost);

    return 0;
}





float parse_data(char string[]){
    char product_name[50];
    float product_unit_cost;
    int product_quantity;
    sscanf(string, "%s %d %f", product_name, &product_quantity, &product_unit_cost);

    return product_unit_cost;
}

void pretty_print(char item[], int total, float cost){
    float subtotal = total * cost;
    printf("Item: %-10s\tQuantity: %2d\tItem Cost: $%5.2f\tSubtotal: $%6.2f\t\n", item, total, cost, subtotal);
}