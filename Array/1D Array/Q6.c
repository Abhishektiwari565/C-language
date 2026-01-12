#include<stdio.h>

//Q6 Write a Program to perform the addition operation of two 1D arrays &
// and store it in another array. Keep in mind that both array sizes must be the same.
void main(){
	int i, n,sum=0;
	
	//for array A
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n],b[n],c[n];
    printf("Array A");
    for(i = 0; i < n; i++) {
        printf("\nEnter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
   //for Array B
	printf("\n\nArray B");
	 printf("\nEnter array size: ");
    scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("\nEnter array[%d]:",i);
		scanf("%d",&b[i]);
	}
	
	//for array c
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}
	printf("Array os c is:");
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	
}
