#include <stdio.h>
/* 
������2+22+222+2222....���Ƶĺ� 
*/

int main(){
	int a = 0;
	int n = 0;
	scanf("%d%d",&a,&n);//2 5
	int sum = 0;
	int i = 0;
	int ret = 0;
	//2 22 222 2222 22222
	for(i=0;i<n;i++){
		ret = ret*10+a;//ÿһ�εĽ��ֵ 
		sum += ret;//���ֵ��ӵĺ� 
	}
	printf("sum=%d\n",sum);
}
