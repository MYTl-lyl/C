#include <stdio.h>
//1.������������Ȼ��Ӵ�С���
//2.��ӡ100֮�������3�ı���
//3.���������������������������Լ��
//4.��ӡ1000-2000��֮�������
//5.��ӡ100-200֮�������/����
 
//1.������������Ȼ��Ӵ�С��� 
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

//2.��ӡ100֮�������3�ı���
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

//3.���������������������������Լ��
/*
//շת����� 
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

//4.��ӡ1000-2000��֮�������

/*
int main(){
	int i =0;
	int count = 0;
	for(i=1000;i<2001;i++){
		//�ܱ�4�����Ҳ��ܱ�100����
		//�ܱ�400����Ҳ������ 
		
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


//5.��ӡ100-200֮�������/����

//�Գ��� 1
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

//�Գ��� 2��sqrt()��ƽ�� 
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
 //�Գ��� 3������ż�� 
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