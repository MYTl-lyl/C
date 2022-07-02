#include <stdio.h>
/*
1.函数指针数组 --- 转移表 
2.回调函数 

*/
void menu(){
	printf("**************************\n");
	printf("*** 1.add        2.sub ***\n");
	printf("*** 3.mul        4.div ***\n");
	printf("***        0.exit      ***\n");
	printf("**************************\n");
}
int Add(int x,int y){
	return x+y;
}
int Sub(int x,int y){
	return x-y;
}
int Mul(int x,int y){
	return x*y;
}
int Div(int x,int y){
	return x/y;
}
/*
int main(){
	int a = 0;
	int b = 0;
	int ret = 0;
	int input = 0;
	int(* pfArr[] )(int,int)={0,Add,Sub,Mul,Div};//函数指针 数组 
	do{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		if(input >=1 && input <= 4){
			printf("请输入两个整数:>");
			scanf("%d%d",&a,&b);
			int ret = pfArr[input](a,b);
			printf("%d\n",ret);
		}else if(input == 0){
			printf("退出！");
		}else{
			printf("非法输入！\n");
		}
		
	}while(input);
}*/

void Calc(int(* pfArr)(int,int)){
	int a = 0;
	int b = 0;
	printf("请输入两个整数:>");
	scanf("%d%d",&a,&b);
	printf("%d\n",pfArr(a,b));
}
int main(){
	;
	int input = 0;
	do{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input){
			case 0:
				printf("退出!");
				break;
			case 1:		
				Calc(Add); //回调函数 
				break;
			case 2:
				Calc(Sub);
				break;
			case 3:
				Calc(Mul);
				break;
			case 4:
				Calc(Div);
				break;
			default:
				printf("非法输入！\n");
				break;
		}
	}while(input);
}
