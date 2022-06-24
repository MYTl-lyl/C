#include <stdio.h>
/*
模拟用户登录情景，并只能登录三次 
*/


int main(){
	int i = 0;
	char password[20] = {0};
	for(i=0;i<3;i++){
		printf("请输入密码:>");
		scanf("%s",&password);
		if(strcmp(password,"123456") == 0){//==不能比较两个字符串是否次相同 
			printf("登录成功\n");
			break;
		}else{
			printf("密码错误\n");
		}
	} 
	if(i==3){
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}