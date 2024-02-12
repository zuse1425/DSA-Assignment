#include <stdio.h>
#include <math.h>

void displayMenu();
float calculateSquareArea(float side);
float calculateRectangleArea(float length, float width);
float calculateCircleArea(float radius);

int main() {
    int choice;

    do {
        displayMenu();
        printf("Enter your choice (1-3, 0 to exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    float side;
                    printf("Enter the side length of the square: ");
                    scanf("%f", &side);
                    printf("Area of the square: %.2f\n", calculateSquareArea(side));
                    break;
                }
            case 2:
                {
                    float length, width;
                    printf("Enter the length of the rectangle: ");
                    scanf("%f", &length);
                    printf("Enter the width of the rectangle: ");
                    scanf("%f", &width);
                    printf("Area of the rectangle: %.2f\n", calculateRectangleArea(length, width));
                    break;
                }
            case 3:
                {
                    float radius;
                    printf("Enter the radius of the circle: ");
                    scanf("%f", &radius);
                    printf("Area of the circle: %.2f\n", calculateCircleArea(radius));
                    break;
                }
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}

void displayMenu() {
    printf("\n*** Geometrical Figure Area Calculator ***\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("0. Exit\n");
}

float calculateSquareArea(float side) {
    return side * side;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateCircleArea(float radius) {
    return M_PI * radius * radius;
}

