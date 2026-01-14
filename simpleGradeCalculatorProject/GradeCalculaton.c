#include<stdio.h>

//Here is a simple C program that takes a score out of 100 and prints the grade A to F using ternary operators.
void main(){
	int score;
	char grade;
	printf("Enter score:");
	scanf("%d",&score);
	
	grade=(score>=90)? 'A':
		  (score>=80)? 'B':
		  (score>=70)? 'C':
		  (score>=60)? 'D':
		  (score>=50)? 'E':
		  (score>=40)? 'F': 'X';
		  	
	printf("Your grade is %c\n",grade);	  	
}
