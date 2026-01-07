#include<stdio.h>

//Q.1 Develop a prgrm to print all the alphabets from a to z by skipping 3 alphabets using do..while loop.
void main(){
	int i=1;;
	do{
		printf("%c",i+96);
		i+=3;
	}while(i<=26);
}
