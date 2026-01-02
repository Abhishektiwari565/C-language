#include<stdio.h>

//wap to perform arithmetic operations.
void main(){
	int num1;
	int num2;
	int choice;
	int ans;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1){
	    ans=num1+num2;
	    printf("addition of num1 and num2 is %d",ans);
	}else if(choice==2){
		ans=num1-num2;
	    printf("subtraction of num1 and num2 is %d",ans);
	}else if(choice==3){
		ans=num1*num2;
	    printf("multiplication of num1 and num2 is %d",ans);
	}else if(choice==4){
		ans=num1/num2;
	    printf("division of num1 and num2 is %d",ans);
	}else{
		printf("Invalid choice");
	}
			
}

