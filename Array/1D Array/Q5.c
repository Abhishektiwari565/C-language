#include<stdio.h>

// Q5. Write a Program to find the length of a 1D array.

void main() {
    int i, n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nLength of 1D array is: %d", n);
}

