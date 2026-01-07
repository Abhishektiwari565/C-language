#include<stdio.h>

//Q.2 wap to count the total number of digits in a number.
void main(){
	int n,count=0;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(n>0){
		count++;
		n=n/10;
	}
	
	printf("Digits=%d",count);
	
}
