#include <stdio.h>
//дһ����������arr�����������ҵ�7 

//���ֲ��� 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 11;
	int sz = sizeof(arr)/sizeof(arr[0]);//���鳤�� 
	int left = 0;//���±�
	int right = sz-1; //���±� 
	while(left<=right){
		int mid = (left + right)/2;//�м�Ԫ���±� 
		if(arr[mid] > k){
			right = mid-1;
		
		}else if(arr[mid] < k){
			left = mid+1;
		
		}else{
			printf("�ҵ��ˣ��±�Ϊ:%d\n",mid);
			break;
		}
	}
	if(left>right){
		printf("�Ҳ���Ԫ��%d\n",k);
	}
	return 0;
}
/*
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);//���鳤�� 
	for(i=0;i<sz;i++){
		if(arr[i] == 7){
			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
			break;
		} 
	}
	if(i == sz){
		printf("û�ҵ�\n");
	}
	return 0;
}*/