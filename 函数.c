#include <stdio.h>
#include <math.h>

//用函数判断100-200的素数
/*
int is_prime(int n){
	int i = 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int i =0;
	for(i=100;i<=200;i++){
		//判断i是否为素数
		if(is_prime(i) == 1){
			printf("%d ",i);
		} 
	}
} */

//函数+二分查找，在有序数字查找数字7
int binary_search(int arr[],int k,int sz){//arr[]接受的是首元素地址 
	int i=0;
	
	int left = 0;//左 
	int right = sz-1;//右
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid] < k){
			left = mid + 1;
	
		}else if(arr[mid]>k){
			right = mid-1;
			
		}else if(arr[mid] == k){
			return mid;
		}
	}
	return -1;
}
int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int a = binary_search(arr,k,sz);
	
	if(a == -1 ){
		printf("数字7没找到");
	}else{
		 printf("数字7，找到了，下标是：%d\n",a);
	}
	 
	return 0;
} 