#include <stdio.h>

int main() {
    float x, y;

  
    printf("Enter the x coordinate: ");
    scanf("%f", &x);
    printf("Enter the y coordinate: ");
    scanf("%f", &y);

  
    if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    } else if (x == 0) {
        if (y > 0) {
            printf("The point (%.2f, %.2f) is on the positive y-axis.\n", x, y);
        } else {
            printf("The point (%.2f, %.2f) is on the negative y-axis.\n", x, y);
        }
    } else if (y == 0) {
        if (x > 0) {
            printf("The point (%.2f, %.2f) is on the positive x-axis.\n", x, y);
        } else {
            printf("The point (%.2f, %.2f) is on the negative x-axis.\n", x, y);
        }
    } else {
        if (x > 0 && y > 0) {
            printf("The point (%.2f, %.2f) is in Quadrant I.\n", x, y);
        } else if (x < 0 && y > 0) {
            printf("The point (%.2f, %.2f) is in Quadrant II.\n", x, y);
        } else if (x < 0 && y < 0) {
            printf("The point (%.2f, %.2f) is in Quadrant III.\n", x, y);
        } else if (x > 0 && y < 0) {
            printf("The point (%.2f, %.2f) is in Quadrant IV.\n", x, y);
        }
    }

    return 0;
}
