#include<stdio.h>

//3.wap to find transpose of 2D array.
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
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose matrix is:\n");
	for(i=0;i<cols;i++){
		for(j=0;j<rows;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
