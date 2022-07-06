#include <stdio.h>
/*
杨氏矩阵：
	有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
	请编写程序在这样的矩阵中查找到某个数字是否存在 
要求：时间复杂度小于o(N); ----(有n个数，需要遍历n次才能找到时间复杂度就是O（N）) 
*/
int FindNum(int arr[3][3],int k,int* row,int* col){
	int x = 0;
	int y = *col-1;
	while(x<=*row-1 && y>=0){
		if(arr[x][y] < k){
			x++;
		}else if(arr[x][y] > k){
			y--;
		}else{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k = 0;
	int x = 3;
	int y = 3;
	scanf("%d",&k);
	//返回型参数 
	int ret = FindNum(arr,k,&x,&y);	
	if(ret == 1){
		printf("找到了,%d 的下标是(%d,%d)\n",k,x,y);
	}else{
		printf("找不到\n"); 
	} 
	return 0;
} 
