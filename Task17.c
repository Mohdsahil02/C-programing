#include <stdio.h>

int main() {
    int num;
    int remainder;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    remainder = num % 2;

   
    switch (remainder) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
            printf("%d is an odd number.\n", num);
            break;
        default:
           
            printf("Unexpected error!\n");
            break;
    }

    return 0;
}
