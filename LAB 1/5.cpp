#include <stdio.h>

void displayFibonacci(int n);

int main() {
    int n;

    printf("Enter the number of elements in the Fibonacci series: ");
    scanf("%d", &n);

    displayFibonacci(n);

    return 0;
}

void displayFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series (first %d elements): ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");
}

