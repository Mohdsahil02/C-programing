#include <stdio.h>

int main() {
   
    char grade;

   
    printf("Enter the grade (A, B, C, D, E or F): ");
    scanf(" %c", &grade); 

   
    switch (grade) {
        case 'A':
            printf("Equivalent Description: Excellent\n");
            break;
        case 'B':
            printf("Equivalent Description: Good\n");
            break;
        case 'C':
            printf("Equivalent Description: Average\n");
            break;
        case 'D':
            printf("Equivalent Description: Below Average\n");
            break;
        case 'F':
            printf("Equivalent Description: Fail\n");
            break;
        default:
            printf("Invalid grade entered. Please enter a valid grade (A, B, C, D, or F).\n");
            break;
    }

    return 0;
}
