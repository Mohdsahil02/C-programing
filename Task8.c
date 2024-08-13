#include <stdio.h>

int main() {
    
    float side1, side2, side3;

   
    printf("Enter the length of the first side: ");
    scanf("%f", &side1);
    
    printf("Enter the length of the second side: ");
    scanf("%f", &side2);
    
    printf("Enter the length of the third side: ");
    scanf("%f", &side3);

   
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
      
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}
