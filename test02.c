#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//��ʾ����ַ��������ƶ������м��� 
//H###o
//He#lo
//Hello

int main(){
	char arr1[]={"Hello"};
	char arr2[]={"#####"};
	//int right = sizeof(arr2)/sizeof(arr2[0]) - 2;//�ַ�����-2 
	int right = strlen(arr1)-1;//�ַ�������-1 
	int left = 0;

	while(left<=right){
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		//ͣ��1s;
	 	Sleep(1000);//1000ms
	 	system("cls");//ִ�������һ������--cls -- ��� 
		left++;
		right--;
	} 
	printf("%s\n",arr2);
	return 0;
} 