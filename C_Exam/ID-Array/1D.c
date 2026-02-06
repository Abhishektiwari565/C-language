//2.Create a C program to find the largest element in an 1D array.
#include <stdio.h>

void main() {
    int i, n;
    int arr[20];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %d", largest);
}

