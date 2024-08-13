#include <stdio.h>

int main() {
   
    int month;

  
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

   
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The number of days in month %d is 31 days.\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The number of days in month %d is 30 days.\n", month);
            break;
        case 2:
            printf("February typically has 28 days.\n");
            printf("In a leap year, February has 29 days.\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
