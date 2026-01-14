#include<stdio.h>

void main(){
	int score;
	printf("Enter score:");
	scanf("%d",&score);
	
	if(score>=90 && score<=100){
		printf("Congratulations,you are eligible for next level!");
	}else if(score>=80 && score<=90){
		printf("Congratulations,you are eligible for next level!");
	}else if(score>=70 && score<=80){
		printf("Congratulations,you are eligible for next level!");
	}else if(score>=60 && score<=70){
		printf("Congratulations,you are eligible for next level!");
	}else if(score>=50 && score<=60){
		printf("Congratulations,you are eligible for next level!");
	}else{
		printf("Please try again next time");
	}
}
