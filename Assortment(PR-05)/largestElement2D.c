#include<stdio.h>

//2.wap to find largest numbers using 2D array.
void main(){
	int rows,cols,i,j,max;
	printf("Enter rows:");
	scanf("%d",&rows);
	
	printf("Enter cols:");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	
	printf("Enter array elements:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("Largest number in the 2D array is:%d\n",max);
}
