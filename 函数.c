#include <stdio.h>
#include <math.h>

//�ú����ж�100-200������
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
		//�ж�i�Ƿ�Ϊ����
		if(is_prime(i) == 1){
			printf("%d ",i);
		} 
	}
} */

//����+���ֲ��ң����������ֲ�������7
int binary_search(int arr[],int k,int sz){//arr[]���ܵ�����Ԫ�ص�ַ 
	int i=0;
	
	int left = 0;//�� 
	int right = sz-1;//��
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
		printf("����7û�ҵ�");
	}else{
		 printf("����7���ҵ��ˣ��±��ǣ�%d\n",a);
	}
	 
	return 0;
} 