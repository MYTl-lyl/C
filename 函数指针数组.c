#include <stdio.h>
/*
1.����ָ������ --- ת�Ʊ� 
2.�ص����� 

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
	int(* pfArr[] )(int,int)={0,Add,Sub,Mul,Div};//����ָ�� ���� 
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		if(input >=1 && input <= 4){
			printf("��������������:>");
			scanf("%d%d",&a,&b);
			int ret = pfArr[input](a,b);
			printf("%d\n",ret);
		}else if(input == 0){
			printf("�˳���");
		}else{
			printf("�Ƿ����룡\n");
		}
		
	}while(input);
}*/

void Calc(int(* pfArr)(int,int)){
	int a = 0;
	int b = 0;
	printf("��������������:>");
	scanf("%d%d",&a,&b);
	printf("%d\n",pfArr(a,b));
}
int main(){
	;
	int input = 0;
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input){
			case 0:
				printf("�˳�!");
				break;
			case 1:		
				Calc(Add); //�ص����� 
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
				printf("�Ƿ����룡\n");
				break;
		}
	}while(input);
}
