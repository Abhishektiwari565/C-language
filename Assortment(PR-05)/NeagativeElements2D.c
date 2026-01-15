#include<stdio.h>

//1.find negatives number from the 2D array.
void main(){
	int i,n;
	printf("Enter array of size:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter array[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nNegatives number are:\n");
	for(i=0;i<n;i++){
		if(arr[i]<0){
			printf("%d",arr[i]);
		}
		
	}
}
