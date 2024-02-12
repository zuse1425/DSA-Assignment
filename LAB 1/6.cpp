#include <stdio.h>

void printTable(int start, int end);

int main() {
    int x, y;

    printf("Enter the starting table number: ");
    scanf("%d", &x);

    printf("Enter the ending table number: ");
    scanf("%d", &y);

    printTable(x, y);

    return 0;
}

void printTable(int start, int end) {
    printf("Table Book from Table %d to Table %d:\n", start, end);

    for (int i = 1; i <= 10; i++) {
        for (int j = start; j <= end; j++) {
            printf("%4d", j * i);
        }
        printf("\n");
    }
}

