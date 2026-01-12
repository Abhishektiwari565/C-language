#include <stdio.h>

//Q.1 Write a Program to find the average of a given 2D array.
int main() {
    int rows, cols, i, j;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    int sum = 0;
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum += arr[i][j];

    float avg = (float)sum / (rows * cols);
    printf("Average of an Array: %.2f\n", avg);
    return 0;
}

