#include <stdio.h>

int main(){
    int DEPENDANTTAXCREDIT = 450;
    int income;
    printf("Enter income: ");
    scanf("%d", &income);
    
    float bracket1 = 0.0 , bracket2 = 0.0, bracket3 = 0.0, bracket4 = 0.0, bracket5= 0.0;
    float taxDue = 0.0;
    if (income <= 9275) {
        taxDue = income * 0.12; // 12% for income up to $9,275
    } else if (income <= 37650) {
        taxDue = (9275 * 0.12) + ((income - 9275) * 0.17); // 17% for income between $9,275 and $37,650
    } else if (income <= 91150) {
        taxDue = (9275 * 0.12) + ((37650 - 9275) * 0.17) + ((income - 37650) * 0.27); // 27% for income between $37,650 and $91,150
    } else if (income <= 190150) {
        taxDue = (9275 * 0.12) + ((37650 - 9275) * 0.17) + ((91150 - 37650) * 0.27) + ((income - 91150) * 0.30); // 30% for income between $91,150 and $190,150
    } else {
        taxDue = (9275 * 0.12) + ((37650 - 9275) * 0.17) + ((91150 - 37650) * 0.27) + ((190150 - 91150) * 0.30) + ((income - 190150) * 0.35); // 35% for income above $190,150
    }

    printf("Tax due = $%.2f\n", taxDue);
    int dependant;
    int taxCredit;
    printf("Enter the number of dependents (0 for none): ");
    scanf("%d", &dependant);
    if (dependant > 5 ){
        taxCredit = 2250;
    } else {
        taxCredit = (DEPENDANTTAXCREDIT * dependant);
    }
    printf("Tax credit = $%d\n", taxCredit); 
    float adjustedTax = taxDue - taxCredit;
    printf("Adjusted Tax = $%.2f\n", adjustedTax);

    return 0;
}

  /*  Tax Rate  Income Bracket 
        12% --> $0 to $9,275 
        17% --> $9,275 to $37,650 
        27% --> $37,650 to $91,150 
        30% --> $91,150 to $190,150 
        35% --> $190,150 and above 
    */