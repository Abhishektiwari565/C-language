//#include<stdio.h>

//11
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
//void main(){
//	int i=1,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//		printf("%d",j);	
//		}
//		printf("\n");
//	}
//}

//2 1
//  2 1
//  3 2 1
//  4 3 2 1
//  5 4 3 2 1
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j>=1;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//3 1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j>=1;j--){
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//}

//4 5
//  5 4
//  5 4 3
//  5 4 3 2
//  5 4 3 2 1
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=5;j>=6-i;j--){
//		printf("%d",j);	
//		}
//		printf("\n");
//	}
//}

//5	5
//  4 5
//  3 4 5
//  2 3 4 5
//  1 2 3 4 5
//void main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=i;j<=5;j++){
//		printf("%d",j);	
//		}
//		printf("\n");
//	}
//}

//6 5
/// 4 4
//  3 3 3
//  2 2 2 2
//  1 1 1 1 1
//void main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=i;j<=5;j++){
//		printf("%d",i);	
//		}
//		printf("\n");
//	}
//}

//7 1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1
//void main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//		printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//8 1 2 3 4 5
//  2 3 4 5
//  3 4 5
//  4 5
//  5
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j<=5;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//9 1 1 1 1 1
//  2 2 2 2
//  3 3 3
//  4 4
//  5
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j<=5;j++){
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//}

//10  5 4 3 2 1
//    5 4 3 2
//    5 4 3
//    5 4
//    5
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=5;j>=i;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//11  5 4 3 2 1
//    4 3 2 1
//    3 2 1
//    2 1
//    1
//void main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=i;j>=1;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//12  5 5 5 5 5
//    4 4 4 4
//    3 3 3
//    2 2
//    1
//void main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=i;j>=1;j--){
//		printf("%d",i);	
//		}
//		printf("\n");
//	}
//}

//13  *
//    * *
//    * * *
//    * * * *
//    * * * * *
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//14  * * * * *
//    * * * *
//    * * * 
//    * * 
//    *
//void main(){
//	int i,j;
//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//		printf("*");	
//		}
//		printf("\n");
//	}
//}

//15  1
//    0 1
//    1 0 1
//    0 1 0 1
//    1 0 1 0 1
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j>=1;j--){
//		if(j%2==0){
//			printf("0");
//		}else{
//			printf("1");
//		}	
//		}
//		printf("\n");
//	}
//}

//16  1 0 1 0 1
//    0 1 0 1
//    1 0 1
//    0 1
//    1
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j<=5;j++){
//			if(j%2==0){
//				printf("0");
//			}else{
//				printf("1");
//			}
//		}
//		printf("\n");
//	}
//}

//17  1
//    1 0
//    1 0 1
//    1 0 1 0
//    1 0 1 0 1 
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			if(j%2==0){
//				printf("0");
//			}else{
//				printf("1");
//			}
//		}
//		printf("\n");
//	}
//} 

//18  0
//    0 1
//    0 1 0
//    0 1 0 1
//    0 1 0 1 0
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			if(j%2==0){
//				printf("1");
//			}else{
//				printf("0");
//			}
//		}
//		printf("\n");
//	}
//}

//19  1
//    2 3
//    4 5 6
//    7 8 9 10
//    11 12 13 14 15
//void main(){
//	int i,j,k=1;
//	
//	for(i=1;i<=5;i++){
//		for(j=i;j>=1;j--){
//			printf("%d ",k);
//			k++;
//		}
//		printf("\n");
//	}
//}

//20     -
//       | -
//       - | -
//       | - | -
//       - | - | -
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j>=1;j--){
//			if(j%2==0){
//				printf("/ ");
//			}else{
//				printf("- ");//1
//			}
//			
//		}
//		printf("\n");
//	}
//}

//21    A
//      A B
//      A B C
//      A B C D
//      A B C D E
//void main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			printf("%c",j+64);
//		}
//		printf("\n");
//	}
//}

//22     A
//       B C
//       D E F
//       G H I J      
//       K L M N O
//void main(){
//	int i,j,k=1;
//	for(i=1;i<=5;i++){
//		for(j=i;j>=1;j--){
//			printf("%c ",k+64);
//			k++;
//		}
//		printf("\n");
//	}
//}
