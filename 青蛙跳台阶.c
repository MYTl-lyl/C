#include <stdio.h>
/*
������̨��1(����쳲���������)��
	n��̨�� 
	1�ο�����1��̨�ף�Ҳ������2��̨��
	������Ҫ������n��̨���ж����������� 
	 n=1  --- 1  --- 1 
	 n=2  --- 2  --- 2
	 n=3  --- 3  --- 1+2
	 n=4  --- 5  --- 3+2
	 n=5  --- 8  --- 5+3
	 ...
	 n=n  --- jump(n-1)+jump(n-2)	
*/ 
/*
int jump(int n){
	if(n>2){
		return jump(n-1)+jump(n-2);
	}
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
}

int main(){
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = jump(n);
	printf("����������%d��̨�׵ķ����У�%d �֡�\n",n,ret);
	return 0;
} */

/*
������̨��2:
	һ�ο�����1,2,3...n��
	 ������Ҫ������n��̨���ж�����������
	 n=1  --- 1  --- 0*2 
	 n=2  --- 2  --- 1*2
	 n=3  --- 4  --- 2*2
	 n=4  --- 8  --- 4*2
	 n=5  --- 16 --- 8*2
	 ...
	 n=n  --- 2*jump(n-1)
*/
/*
int jump(int n){
	if(n>1)
		return 2*jump(n-1);
	if(n==1)
		return 1;
}
int main(){
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = jump(n);
	printf("����������%d��̨�׵ķ����У�%d �֡�\n",n,ret);
	return 0;
} */
