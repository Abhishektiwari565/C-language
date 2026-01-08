#include<stdio.h>

//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5
//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=4;k>=i;k--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=4;k>=i;k--){
//			printf(" ");
//		}
//		for(j=i;j>=1;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}


//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=i;k>=1;k--){
//			printf(" ");
//		}
//		for(j=i;j<=5;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}


//        5
//      5 4
//    5 4 3
//  5 4 3 2
//5 4 3 2 1

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=i;k>=1;k--){
//			printf(" ");
//		}
//		for(j=5;j>=i;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//        1
//      2 2
//    3 3 3
//  4 4 4 4
//5 5 5 5 5

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=4;k>=i;k--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//}


//        5
//      4 4
//    3 3 3
//  2 2 2 2
//1 1 1 1 1

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=i;k>=1;k--){
//			printf(" ");
//		}
//		for(j=5;j>=i;j--){
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//}


//1 2 3 4 5
//  1 2 3 4
//    1 2 3
//      1 2
//        1

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=i;k<5;k++){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//		printf("%d",j);	
//		}
//		printf("\n");
//	}
//}


//1 2 3 4 5
//  2 3 4 5
//    3 4 5
//      4 5
//        5

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=1;k<i;k++){
//			printf(" ");
//		}
//		for(j=i;j<=5;j++){
//		printf("%d",j);	
//		}
//		printf("\n");
//	}
//}


//5 4 3 2 1
//  5 4 3 2
//    5 4 3
//      5 4
//        5

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=1;k<i;k++){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//		printf("%d ",j);	
//		}
//		printf("\n");
//	}
//}


//5 4 3 2 1
//  4 3 2 1
//    3 2 1
//      2 1
//        1

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=5;k>i;k--){
//			printf(" ");
//		}
//		for(j=i;j>=1;j--){
//		printf("%d",j);	
//		}
//		printf("\n");
//	}
//}


//* * * * *
//  * * * *
//    * * *
//      * *
//        *

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//		printf("* ");	
//		}
//		printf("\n");
//	}
//}


//        *
//      * *
//    * * *
//  * * * *
//* * * * *

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=i;k>=1;k--){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


//        A
//      B A
//    C B A
//  D C B A
//E D C B A

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=i;j>=1;j--){
//			printf("%c ",j+64);
//		}
//		printf("\n");
//	}
//}


//        A
//      A B
//    A B C
//  A B C D
//A B C D E

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			printf("%c ",j+64);
//		}
//		printf("\n");
//	}
//}


//A B C D E
//  A B C D
//    A B C
//      A B
//        A

//void main(){
//	int i,j,k;
//	for(i=5;i>=1;i--){
//		for(k=i;k<=5;k++){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			printf("%c ",j+64);
//		}
//		printf("\n");
//	}
//}

//        1
//      1 0
//    1 0 1
//  1 0 1 0
//1 0 1 0 1

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			if(j%2==0){
//				printf("0 ");
//			}else{
//				printf("1 ");
//			}
//		}
//		printf("\n");
//	}
//}

//        1
//      0 0
//    1 1 1
//  0 0 0 0
//1 1 1 1 1

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			if(i%2==0){
//				printf("0 ");
//			}else{
//				printf("1 ");
//			}
//		}
//		printf("\n");
//	}
//}


//1 0 1 0 1
//  0 1 0 1
//    1 0 1
//      0 1
//        1

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=i;k>1;k--){
//			printf("  ");
//		}
//		for(j=i;j<=5;j++){
//			if(j%2==0){
//				printf("0 ");
//			}else{
//			    printf("1 ");	
//			}
//		}
//		printf("\n");
//	}
//}


//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=i;k>1;k--){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//			if(j%2==0){
//				printf("0 ");
//			}else{
//			    printf("1 ");	
//			}
//		}
//		printf("\n");
//	}
//}


//        1 1 1 1 1
//          0 0 0 0
//            1 1 1
//              0 0
//                1


//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=i;k>1;k--){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//			if(i%2==0){
//				printf("0 ");
//			}else{
//			    printf("1 ");	
//			}
//		}
//		printf("\n");
//	}
//}


//- | - | - | -
//  - | - | -
//    - | -
//      - |
//        -

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=i;k>1;k--){
//			printf("  ");
//		}
//		for(j=5;j>=i;j--){
//			if(j%2==0){
//				printf("/ ");
//			}else{
//			    printf("- ");	
//			}
//		}
//		printf("\n");
//	}
//}


//        |
//      | -
//    | - |
//  | - | -
//| - | - |

//void main(){
//	int i,j,k;
//	for(i=1;i<=5;i++){
//		for(k=5;k>i;k--){
//			printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			if(j%2==0){
//				printf("- ");
//			}else{
//				printf("/ ");
//			}
//		}
//		printf("\n");
//	}
//}










