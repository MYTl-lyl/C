#include <stdio.h>
//1.输入三个数，然后从大到小输出
//2.打印100之间的所有3的倍数
//3.给的两个数，求这两个数的最大公约数
//4.打印1000-2000年之间的闰年
//5.打印100-200之间的素数/质数
 
//1.输入三个数，然后从大到小输出 
/*
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		t = a;
		a = b;
		b = t;	
	}
	if(a<c){
		t = a;
		a = c;
		c = t;		
	}
	if(b<c){
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d",a,b,c);
	return 0;
} */

//2.打印100之间的所有3的倍数
/*
int main(){
	int i = 0;
	for(i=1;i<101;i++){
		if(i%3 == 0){
			printf("%d ",i);
		}
	}
	return 0;
}*/

//3.给的两个数，求这两个数的最大公约数
/*
//辗转相除法 
int main(){
	int a,b,i;
	scanf("%d%d",&a,&b);
	while(a%b){
		i = b;
		b = a%b;
		a = i;
	}
	printf("%d",b);
	return 0;
}*/

//4.打印1000-2000年之间的闰年

/*
int main(){
	int i =0;
	int count = 0;
	for(i=1000;i<2001;i++){
		//能被4整除且不能被100整除
		//能被400整除也是闰年 
		
		//if(i%4==0 && i%100!=0){
		//	count++;
		//	printf("%d ",i);
		//}else if(i%400==0){
		//	count++;
		//	printf("%d ",i);
		
		if((i%4==0 && i%100!=0)||(i%400==0)){
			count++;
			printf("%d ",i);
		}
	}
	printf("\n%d\n",count);
	return 0;
} */


//5.打印100-200之间的素数/质数

//试除法 1
/*
int main(){
	int i,j;
	for(i=100;i<201;i++){
		j = 2; 
		for(;j<i;j++){
			if(i%j == 0){
				break;
			}
		}
		if(j==i){
			printf("%d ",i);
		}
	}
	return 0;
}*/

//试除法 2：sqrt()开平方 
/*
#include <math.h>
 int main(){
	int i,j;
	for(i=100;i<201;i++){
		for(j = 2;j<=sqrt(i);j++){
			if(i%j == 0 ){
				break;
			}
		}
		if(j>sqrt(i)){
			printf("%d ",i);
		}
	}
	return 0;
 }*/
 //试除法 3：跳过偶数 
  int main(){
	int i,j;
	for(i=101;i<=200;i+=2){
		for(j = 2;j<=sqrt(i);j++){
			if(i%j == 0 ){
				break;
			}
		}
		if(j>sqrt(i)){
			printf("%d ",i);
		}
	}
	return 0;
 }