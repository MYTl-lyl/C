#include <stdio.h>
//递归与迭代
//1.输入一个数，依次打印出来
//2.不允许创建临时变量，求字符串长度
//3.求n的阶乘（不考虑溢出）

 
//1.输入一个数，依次打印出来
/*
void print(int n){
	if(n>9){
		print(n/10);
	}
	printf("%d ",n%10);
}

int main(){
	int num = 0;
	scanf("%d",&num);
	print(num);
	return 0;
}*/

//2.不允许创建临时变量，求字符串长度
//使用了临时变量 
//int my_strlen(char* str){
//	int count = 0;
//	while(*str != '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}
//使用临时变量
/*
int my_strlen(char* str){
	if(*str != '\0'){
		return 1+my_strlen(str+1);
	}else{
		return 0;
	}
} 
int main(){
	char arr[] ="bit";
	int len = my_strlen(arr);//数组传参传过去的是数组首元素地址 
	printf("len=%d\n",len);
	return 0;	
} */

//3.求n的阶乘（不考虑溢出） 
//int Facl(int n){//循环方式
//	int i = 0;
//	int ret = 1;
//	for(i=1;i<=n;i++){
//		ret = ret*i;
//	}
//	return ret;
//}
/*
int Facl(int n){//递归方式 
	if(n>1){
		return n*Facl(n-1); 
	} else{
		return 1;
	}
}

int main(){
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Facl(n);
	printf("%d\n",ret);
	return 0; 
} */

//4.求第n个斐波那契数列（不考虑溢出）
//斐波那契数列: 1 1 2 3 5 8 13 21 34 55... 
//int Fib(int n){//递归 ，效率低 
//	if(n>2){
//		return Fib(n-1)+Fib(n-2);
//	}else{
//		return 1;
//	}
//}
/*
int Fib(int n){//循环 ，效率高 
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2){
		c = a+b;
		a = b;
		b = c;
		n--;	
	}
	return c;
}
int main(){
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("%d\n",ret);
	return 0;
} */