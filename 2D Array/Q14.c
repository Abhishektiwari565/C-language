#include <stdio.h>

//Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
int main() {
    int n, i, j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter array's elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    int sum = 0;
    for(i = 0; i < n; i++)
        sum += arr[i][i];  // Diagonal elements

    printf("The sum of diagonal elements of an Array: %d\n", sum);
    return 0;
}

