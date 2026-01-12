#include<stdio.h>

//1.WAP to get & print 1D array of N elements.

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
}

