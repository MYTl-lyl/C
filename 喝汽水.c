#include <stdio.h>
/*
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�� 
*/

int main(){
	int money = 20;
	int total = 0;//����ˮ��
	int empty = 0;//��ƿ�� 
	scanf("%d",&money);
	/*
	//����2�� 
	if(money == 0){
		total = 0;
	}else{
		total = 2*money-1;
	}*/
	//����1�� 
	//���������ˮ 
	total = money;
	empty = total;
	//�һ�����ˮ
	 while(empty>=2){
 		total += empty/2;
 		empty = empty/2+empty%2;
	 }
	printf("%d",total);
}
