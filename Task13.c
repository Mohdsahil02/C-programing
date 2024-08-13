#include <stdio.h>

int main() {
   
    int num1, num2, num3;

   
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    printf("Enter the third integer: ");
    scanf("%d", &num3);

  
    int max = num1;

    
    if (num2 > max) {
        max = num2;
    }

    
    if (num3 > max) {
        max = num3;
    }

    
    printf("The maximum of the three integers is: %d\n", max);

    return 0;
}
