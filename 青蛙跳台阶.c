#include <stdio.h>
/*
青蛙跳台阶1(类似斐波那契数列)：
	n个台阶 
	1次可以跳1个台阶，也可以跳2个台阶
	求青蛙要跳到第n个台阶有多少种跳法？ 
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
	printf("青蛙跳到第%d个台阶的方法有：%d 种。\n",n,ret);
	return 0;
} */

/*
青蛙跳台阶2:
	一次可以跳1,2,3...n次
	 求青蛙要跳到第n个台阶有多少种跳法？
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
	printf("青蛙跳到第%d个台阶的方法有：%d 种。\n",n,ret);
	return 0;
} */
