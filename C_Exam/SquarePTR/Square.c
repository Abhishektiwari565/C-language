//4.Write a C program to find square of each elements of an 1D 
//array using Pointer.

#include<stdio.h>
void main(){
	int i, n;
    int arr[20];
    int *ptr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    ptr=arr;
    
    printf("Square of each elements is:\n");
    for(i=0;i<n;i++){
    	printf("%d ",(*(ptr+i))*(*(ptr+i)));
	}
}
