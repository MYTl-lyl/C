#include <stdio.h>
//1.����1-100���������г����˶��ٸ�����9 
//2.����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ
//3.��10�����������ֵ 
//4.9*9�˷��� 
//5.�������������в��Ҿ����ĳ�������ҵ���ӡ�������±꣬�Ҳ���������Ҳ��� 

//1.����1-100���������г����˶��ٸ�����9 
/*
int main(){
	int i,count=0;
	for(i=1;i<=100;i++){
		if(i%10==9){//��λ��9 
			printf("%d ",i);
			count++;
		}
		if(i/10==9){//ʮλ��9 
			printf("%d ",i);
			count++;	
		}
	}
	printf("\n%d\n",count);	
	return 0;
}*/

//2.����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ

/*
//��ʽ1�� 
int main(){
	int i;
	double sum=0.0;
	double sum1=0.0;
	double sum2=0.0;
	for(i=1;i<=100;i+=2){
		sum1 = sum1 + 1.0/i;
	} 
	for(i=2;i<=100;i+=2){
		sum2 = sum2 + 1.0/i;
	}
	sum = sum1-sum2;
	printf("%f",sum);
	return 0;
}*/

/*
//��ʽ2�� 
int main(){
	int i;
	int flag = 1; 
	double sum=0.0;
	for(i=1;i<=100;i++){
		sum+= flag*1.0/i;
		flag = -flag;
	} 
	printf("%f",sum);
	return 0;
}*/

//3.��10�����������ֵ
/*
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int max = arr[0];//���ֵ 
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++){
		if(arr[i] > max){
			max = arr[i];
		} 
	} 
	printf("max = %d\n",max);
	return 0;
}*/

//4.9*9�˷���
/*
int main(){
	int i,j;
	for(i=1;i<=9;i++){//9�� 
		for(j=1;j<=i;j++){
			int n = j*i;
			printf("%d*%d=%-2d ",j,i,n);//����� 
		}
		printf("\n");
	}
	return 0;
}*/

//5.�������������в��Ҿ����ĳ�������ҵ���ӡ�������±꣬�Ҳ���������Ҳ��� 
//��ʽ1�� 
/*
int main(){
	int k=0;
	int i;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	scanf("%d",&k);
	for(i=0;i<sz;i++){
		if(k == arr[i]){
			printf("����%d�������е��±��ǣ�%d\n",k,i);
			break;
		}
	} 
	if(i == sz){
		printf("�Ҳ���\n"); 
	}	
} */
