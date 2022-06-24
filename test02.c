#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//演示多个字符从两端移动，向中间汇聚 
//H###o
//He#lo
//Hello

int main(){
	char arr1[]={"Hello"};
	char arr2[]={"#####"};
	//int right = sizeof(arr2)/sizeof(arr2[0]) - 2;//字符个数-2 
	int right = strlen(arr1)-1;//字符串长度-1 
	int left = 0;

	while(left<=right){
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		//停留1s;
	 	Sleep(1000);//1000ms
	 	system("cls");//执行命令的一个函数--cls -- 清空 
		left++;
		right--;
	} 
	printf("%s\n",arr2);
	return 0;
} 