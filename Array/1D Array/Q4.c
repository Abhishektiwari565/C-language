#include<stdio.h>

//4. WAP to print the multiplication table of each array element.

void main(){
	 int i,n,j;

        printf("Enter array size: ");
        scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);  
    }
       printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
       printf("\n Multiplication table of %d:\n ", arr[i]);
       for(j=1;j<=10;j++){
       	printf("%d*%d=%d\n",arr[i],j,arr[i]*j);
	   }
    }
}
