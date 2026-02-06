//1.Create a C program to check if a character entered by the user
//is a vowel or consonant using a switch statement.
#include<stdio.h>
void main(){
char ch;

printf("Enter a character:");
scanf("%c",&ch);

switch(ch){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("%c is a vowel.\n",ch);
	break;
	
	default:
    printf("%c is consonant.\n",ch);	
}	
}
