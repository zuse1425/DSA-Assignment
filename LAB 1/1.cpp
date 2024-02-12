#include <stdio.h>
#define MILES_TO_KM 1.609

int main() {
    
    double miles, kilometers;

    printf("Enter distance in miles: ");
    scanf("%lf", &miles);

    kilometers = miles * MILES_TO_KM;

    printf("%.2f miles is equal to %.2f kilometers\n", miles, kilometers);

    return 0;
}


