#include <stdio.h>

//1. Write a C program to print all negative elements in an array.

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Negative elements are: ");
    for(i = 0; i < n; i++) {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }
    return 0;
}

