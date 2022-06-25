#include <stdio.h>
//1.计算1-100所有整数中出现了多少个数字9 
//2.计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值
//3.求10个整数中最大值 
//4.9*9乘法表 
//5.整形有序数组中查找具体的某个数，找到打印该数字下标，找不到输出：找不到 

//1.计算1-100所有整数中出现了多少个数字9 
/*
int main(){
	int i,count=0;
	for(i=1;i<=100;i++){
		if(i%10==9){//个位的9 
			printf("%d ",i);
			count++;
		}
		if(i/10==9){//十位的9 
			printf("%d ",i);
			count++;	
		}
	}
	printf("\n%d\n",count);	
	return 0;
}*/

//2.计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值

/*
//方式1： 
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
//方式2： 
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

//3.求10个整数中最大值
/*
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int max = arr[0];//最大值 
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++){
		if(arr[i] > max){
			max = arr[i];
		} 
	} 
	printf("max = %d\n",max);
	return 0;
}*/

//4.9*9乘法表
/*
int main(){
	int i,j;
	for(i=1;i<=9;i++){//9行 
		for(j=1;j<=i;j++){
			int n = j*i;
			printf("%d*%d=%-2d ",j,i,n);//左对齐 
		}
		printf("\n");
	}
	return 0;
}*/

//5.整形有序数组中查找具体的某个数，找到打印该数字下标，找不到输出：找不到 
//方式1： 
/*
int main(){
	int k=0;
	int i;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	scanf("%d",&k);
	for(i=0;i<sz;i++){
		if(k == arr[i]){
			printf("数字%d在数组中的下标是：%d\n",k,i);
			break;
		}
	} 
	if(i == sz){
		printf("找不到\n"); 
	}	
} */
