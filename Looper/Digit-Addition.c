#include<stdio.h>

//Q.3 wap to find sum of a numbers first and last digit.
void main(){
	int n,first,last;
	printf("Enter n:");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10){
		n=n/10;
		
	}
	first=n;
	printf("Sum=%d",first+last);
	
} 
