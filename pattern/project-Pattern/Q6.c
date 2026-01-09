#include<stdio.h>
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

void main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        // Left side numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Spaces
        for (k = 5; k > i; k--) {
            printf("    ");
        }

        // Right side numbers (reverse)
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}

