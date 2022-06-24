#include <stdio.h>
/*
1!+2!+3!...+10!和
*/
int main(){
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;
	//1+2+6=9 
	for(i=1;i<=10;i++){
		ret = ret * i;
		sum = sum + ret;
	}
	printf("1!+2!+3!...+10!和为：%d\n",sum);
	return 0;
}
/*
int main(){
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;
	//1+2+6=9 
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			ret = ret*j;	
		}
		sum = sum + ret;
		ret = 1;
	}
	printf("1!+2!+3!...+10!和为：%d\n",sum);
	
}*/