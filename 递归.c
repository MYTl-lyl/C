#include <stdio.h>
//�ݹ������
//1.����һ���������δ�ӡ����
//2.����������ʱ���������ַ�������
//3.��n�Ľ׳ˣ������������

 
//1.����һ���������δ�ӡ����
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

//2.����������ʱ���������ַ�������
//ʹ������ʱ���� 
//int my_strlen(char* str){
//	int count = 0;
//	while(*str != '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}
//ʹ����ʱ����
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
	int len = my_strlen(arr);//���鴫�δ���ȥ����������Ԫ�ص�ַ 
	printf("len=%d\n",len);
	return 0;	
} */

//3.��n�Ľ׳ˣ������������ 
//int Facl(int n){//ѭ����ʽ
//	int i = 0;
//	int ret = 1;
//	for(i=1;i<=n;i++){
//		ret = ret*i;
//	}
//	return ret;
//}
/*
int Facl(int n){//�ݹ鷽ʽ 
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

//4.���n��쳲��������У������������
//쳲���������: 1 1 2 3 5 8 13 21 34 55... 
//int Fib(int n){//�ݹ� ��Ч�ʵ� 
//	if(n>2){
//		return Fib(n-1)+Fib(n-2);
//	}else{
//		return 1;
//	}
//}
/*
int Fib(int n){//ѭ�� ��Ч�ʸ� 
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