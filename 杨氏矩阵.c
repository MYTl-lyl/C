#include <stdio.h>
/*
���Ͼ���
	��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
	���д�����������ľ����в��ҵ�ĳ�������Ƿ���� 
Ҫ��ʱ�临�Ӷ�С��o(N); ----(��n��������Ҫ����n�β����ҵ�ʱ�临�ӶȾ���O��N��) 
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
	//�����Ͳ��� 
	int ret = FindNum(arr,k,&x,&y);	
	if(ret == 1){
		printf("�ҵ���,%d ���±���(%d,%d)\n",k,x,y);
	}else{
		printf("�Ҳ���\n"); 
	} 
	return 0;
} 
