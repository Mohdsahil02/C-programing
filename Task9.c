#include <stdio.h>

int main() {
    
    int units;
    float totalAmount;

 
    printf("Enter the units of electricity consumed: ");
    scanf("%d", &units);

 
    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1;
    }

   
    if (units <= 199) {
        totalAmount = units * 1.20;
    } else if (units <= 200) {
        totalAmount = (400 * 1.20) + ((units - 400) * 1.50);
    } else if (units <= 400) {
        totalAmount = (100 * 0.10) + (200 * 0.15) + ((units - 600) * 1.80);
    } else {
        totalAmount = (100 * 0.10) + (200 * 0.15) + (200 * 0.20) + ((units - 600) * 0.25);
    }

   
    printf("Total amount to be paid: $%.2f\n", totalAmount);

    return 0;
}
