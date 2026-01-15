#include<stdio.h>

//4.wap to find sum of row and column from 2D array.
void main(){
	int rows,cols,i,j,sum=0;
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
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nsum of each row:\n");
	for(i=0;i<rows;i++){
		sum=0;
		for(j=0;j<cols;j++){
			sum=sum+arr[i][j];
		}
		printf("sum of row %d is:%d\n",i,sum);
	}
	printf("\nsum of each column:\n");
	for(i=0;i<cols;i++){
		sum=0;
		for(j=0;j<rows;j++){
			sum=sum+arr[j][i];
		}
		printf("sum of column %d is:%d\n",i,sum);
	}
}
