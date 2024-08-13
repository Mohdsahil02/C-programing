#include <stdio.h>

int main() {
    float marks1, marks2, marks3;
    float total, percentage;
    char division[20];

 
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    
    total = marks1 + marks2 + marks3;

    
    percentage = (total / 300) * 100; // Assuming each subject is out of 100 marks

   
    if (percentage >= 60) {
        snprintf(division, sizeof(division), "First Division");
    } else if (percentage >= 50) {
        snprintf(division, sizeof(division), "Second Division");
    } else if (percentage >= 40) {
        snprintf(division, sizeof(division), "Third Division");
    } else {
        snprintf(division, sizeof(division), "Fail");
    }

   
    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);

    return 0;
}
