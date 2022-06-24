#include <stdio.h>
//写一个有序数组arr，在数组中找到11

//二分查找 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 11;
	int sz = sizeof(arr)/sizeof(arr[0]);//数组长度 
	int left = 0;//左下标
	int right = sz-1; //右下标 
	while(left<=right){
		int mid = (left + right)/2;//中间元素下标 
		if(arr[mid] > k){
			right = mid-1;
		
		}else if(arr[mid] < k){
			left = mid+1;
		
		}else{
			printf("找到了，下标为:%d\n",mid);
			break;
		}
	}
	if(left>right){
		printf("找不到元素%d\n",k);
	}
	return 0;
}
/*
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);//数组长度 
	for(i=0;i<sz;i++){
		if(arr[i] == 7){
			printf("找到了，下标是：%d\n",i);
			break;
		} 
	}
	if(i == sz){
		printf("没找到\n");
	}
	return 0;
}*/
