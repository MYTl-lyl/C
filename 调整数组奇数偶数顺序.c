#include <stdio.h>
/*
调整奇数偶数的顺序：
调整数组中数字的顺序，使得数组中所有的奇数位于数组前半部分，所有偶数位于数组后半部分 
*/ 
void move(int arr[],int sz){
	int left = 0;
	int right = sz-1;
	while(left < right){
		//从左边找奇数 终止循环 
		while((left < right) && (arr[left]%2==0)){
			left++;
		} 
		//从右边找偶数  终止循环 
		while((left < right) && (arr[right]%2!=0)){
			right--;
		} 
		if(left < right){
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}
void print(int arr[],int sz){
	int i = 0;
	for(i=0;i<sz;i++){
		printf("%d ",arr[i]);
	} 
	printf("\n");
}
int main(){
	int arr[] = {12,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);
	return 0;
}