#include <stdio.h>

int main() {
    int rows = 10;
    int cols = 10;

    // Print top half of heart
    for (int i = rows/2; i <= rows; i += 2) {
        for (int j = 1; j < rows-i; j += 2) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= rows-i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print bottom half of heart
    for (int i = rows; i >= 1; i--) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
