#include<stdio.h>

//2. WAP to find the sum of a 1D array.

void main() {
    int i, n,sum=0;

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
        	sum=sum+arr[i];
    }
    
        printf("\n\nsum of array is:%d",sum);
}

