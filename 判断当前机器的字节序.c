#include <stdio.h>

//int a = 20;
//0x00 00 00 14 
//判断当前机器的字节序
//小端：
//	14 00 00 00
//大端：
// 	00 00 00 14	 
//

/*
int check_sys(){
	int a = 1;//00 00 00 01 
	char* p = (char*)&a;
	if(*p == 1){
		return 1; 
	} else{
		return 0;
	}
} */

/*
int check_sys(){
	int a = 1;//00 00 00 01 
	char* p = (char*)&a;
	//返回1，小端，；返回0，大端 
	return *p;
} */

int check_sys(){
	int a = 1;//00 00 00 01 
	return *(char*)&a;
} 
int main(){
	//返回1，小端，；返回0，大端 
	int ret = check_sys(); 
	if(ret == 1){
		printf("小端\n");
	}else{
		printf("大端\n");
	}
	return 0;
}

