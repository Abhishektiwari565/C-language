#include<stdio.h>

//3. WAP to find the average of the 1D array.

void main(){
	 int i, n,sum=0;
	 float average;

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
       average=(float)sum/n;
    }
       printf("\n Average of 1D array is:%.2f",average);
}
