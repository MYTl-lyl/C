#include <stdio.h>
#include <math.h>
//8. ��ӡˮ�ɻ��������0-10000֮�����е�ˮ�ɻ���
//��ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ��������磺
//153 = 1^3 +5^3 + 3^3

int count_num(int num){//λ�� 
	int count = 0;
	while(num){
		num = num/10;
		count++;
	}
	return count;
}

int daffodil_num(int num,int count){
	int sum = 0;
	while(num){
 		sum += pow(num%10,count);
	 	num = num/10;
	}
	return sum;
}

int main(){
	int count = 0;
	int sum = 0;
	int i = 0;
	for(i=0;i<100000;i++){
		//�ж�i�Ƿ�Ϊˮ�ɻ������������� 
		//1.����i��λ��
		count = count_num(i);
		//2.����i��ÿλ��n�η�֮�� sum
		sum = daffodil_num(i,count);
		//3.�Ƚ�i==sum
		if(i == sum){
			printf("%d ",i);
		} 
	}
}
