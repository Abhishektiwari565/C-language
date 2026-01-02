#include<stdio.h>

//1.Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?
//void main() {
//    float term = 2.0;
//    int i = 1;
//    for(i; i <= 6; i++) {
//        printf("%.3f ", term);
//        term = term / 2;
//    }
//}

//2.Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?
//void main(){
//	int a=7;
//	int b=10;
//	int i=1;
//	for(i;i<=6;i++){
//		printf("%d,%d,",a,b);
//		a++;
//		b++;
//	}
//}

//3.Look at this series: 36, 34, 30, 28, 24, ... What number should come next?
//void main(){
//	int a=36;
//	int b=34;
//	int i=1;
//	for(i;i<=6;i++){
//		printf("%d,%d,",a,b);
//		a-=6;
//		b-=6;
//	}
//}

//4.Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?
//void main(){
//	int a=22;
//	int b=21;
//	int i=1;
//	for(i;i<=6;i++){
//		printf("%d,%d,",a,b);
//		a++;
//		b++;
//	}
//}

//5.Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?
//void main(){
//	int a=53,b=53;
//	int i=1;
//	for(i;i<=4;i++){
//		printf("%d,",a);
//		printf("%d,",b);
//		a-=13;
//		b-=13;
//	}
//}

//6.Look at this series: 21, 9, 21, 11, 21, 13, 21, ... What number should come next?
//void main(){
//	int a=21,b=9;
//	int i=1;
//	for(i;i<=4;i++){
//		printf("%d,",a);
//		printf("%d,",b);
//		b+=2;
//	}
//}

//7.Look at this series: 58, 52, 46, 40, 34, ... What number should come next?
//void main(){
//	int a=58,b=52;
//	int i=1;
//	for(i;i<=4;i++){
//	printf("%d,",a);
//	printf("%d,",b);
//	a-=12;
//	b-=12;	
//	}
//}

//8.Look at this series: 3, 4, 7, 8, 11, 12, ... What number should come next?
//void main(){
//	int a=3,b=4;
//	int i=1;
//	for(i;i<=4;i++){
//	printf("%d,",a);
//	printf("%d,",b);
//	a+=4;
//	b+=4;	
//	}
//}

//9.Look at this series: 8, 22, 8, 28, 8, ... What number should come next?
//void main(){
//	int a=8,b=22;
//	int i=1;
//	for(i;i<=4;i++){
//	printf("%d,",a);
//	printf("%d,",b);
//	b+=6;	
//	}
//}

//10.Look at this series: 31, 29, 24, 22, 17, ... What number should come next?
//void main(){
//	int a=31,b=29;
//	int i=1;
//	for(i;i<=4;i++){
//	printf("%d,",a);
//	printf("%d,",b);
//	a-=7;
//	b-=7;	
//	}
//}

//11.Look at this series: 1.5, 2.3, 3.1, 3.9, ... What number should come next?
//void main(){
//	float a=1.5,b=2.3;
//	int i=1;
//	for(i;i<=3;i++){
//	printf("%.1f,",a);
//	printf("%.1f,",b);
//	a+=1.6;
//	b+=1.6;	
//	}
//}

//12.Look at this series: 14, 28, 20, 40, 32, 64, ... What number should come next?
//void main(){
//	int a=14;
//	int i=1;
//	for(i;i<=7;i++){
//		printf("%d,",a);
//		if(i%2!=0){
//			a*=2;
//		}else{
//			a-=8;
//		}	
//	}
//}

//13.Look at this series: 2, 4, 6, 8, 10, ... What number should come next?
//void main(){
//	int n=2;
//	int i=1;
//	for(i;i<=5;i++){
//		printf("%d,",n);
//		n+=2;
//	}
//}

//14.Look at this series: 201, 202, 204, 207, ... What number should come next?
//void main(){                                           
//	int n=201;
//	int i=1;
//	for(i;i<=4;i++){            
//		printf("%d,",n);//201,202,204,207
//		n=n+i;
//	}
//}

//15.Look at this series: 544, 509, 474, 439, ... What number should come next?
//void main(){
//	int n=544;
//	int i=1;
//	for(i;i<=5;i++){
//		printf("%d,",n);
//		n-=35;
//	}
//}

//16.Look at this series: 80, 10, 70, 15, 60, ... What number should come next?
//void main(){
//	int a=80,b=10;
//	int i=1;
//	for(i;i<=3;i++){
//		printf("%d,%d,",a,b);
//		a-=10;
//		b+=5;
//	}	
//}

//17.Look at this series: 2, 6, 18, 54, ... What number should come next?
//void main(){
//	int a=2;
//	int i=1;
//	for(i;i<=5;i++){
//		printf("%d,",a);
//		a=a*3;
//	}
//}

//18.Look at this series: 5.2, 4.8, 4.4, 4, ... What number should come next?
//void main(){
//	float a=5.2;
//	int i=1;
//	for(i;i<=5;i++){
//		printf("%.1f,",a);
//		a-=0.4;
//	}
//}

//19.Look at this series: 8, 6, 9, 23, 87 , ... What number should come next?
//void main(){
//	int a=8;
//	int i=1;
//	for(i;i<=6;i++){
//		printf("%d,",a);
//		a=a*i;
//		a=a-=i+1;
//	}
//}
