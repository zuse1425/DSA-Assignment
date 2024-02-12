#include <stdio.h>

int getFirstInteger(int n_min, int n_max);

int main() {
    int n_min, n_max;

    printf("Enter the minimum value: ");
    scanf("%d", &n_min);

    printf("Enter the maximum value: ");
    scanf("%d", &n_max);

    int result = getFirstInteger(n_min, n_max);

    if (result != -1) {
        printf("The first integer between %d and %d is: %d\n", n_min, n_max, result);
    } else {
        printf("No integer found between %d and %d\n", n_min, n_max);
    }

    return 0;
}

int getFirstInteger(int n_min, int n_max) {
    for (int i = n_min; i <= n_max; ++i) {
        if (i == (int)i) {
            return i;
        }
    }

    return -1;
}

