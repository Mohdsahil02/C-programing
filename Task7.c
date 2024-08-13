#include <stdio.h>

int main() {
   
    float temperature;

   
    printf("Enter the temperature in degrees Celsius: ");
    scanf("%f", &temperature);

   
    if (temperature < 0) {
        printf("Freezing Weather\n");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("Very Cold Weather\n");
    } else {
        printf("Not Cold Weather\n");
    }

    return 0;
}
