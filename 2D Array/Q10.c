#include <stdio.h>

//4. Write a C program to left-rotate and right-rotate an array without using another array.
void leftRotate(int arr[], int n) {
    int temp = arr[0], i;
    for(i = 0; i < n-1; i++)
        arr[i] = arr[i+1];
    arr[n-1] = temp;
}

void rightRotate(int arr[], int n) {
    int temp = arr[n-1], i;
    for(i = n-1; i > 0; i--)
        arr[i] = arr[i-1];
    arr[0] = temp;
}

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    leftRotate(arr, n);
    printf("Array after left rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    rightRotate(arr, n);
    printf("\nArray after right rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

