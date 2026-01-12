#include <stdio.h>

//Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
int main() {
    int rows, cols, i, j;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];

    printf("Enter array A's elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter array B's elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }

    // Addition
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Array C is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}

