#include <stdio.h>

//int a = 20;
//0x00 00 00 14 
//�жϵ�ǰ�������ֽ���
//С�ˣ�
//	14 00 00 00
//��ˣ�
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
	//����1��С�ˣ�������0����� 
	return *p;
} */

int check_sys(){
	int a = 1;//00 00 00 01 
	return *(char*)&a;
} 
int main(){
	//����1��С�ˣ�������0����� 
	int ret = check_sys(); 
	if(ret == 1){
		printf("С��\n");
	}else{
		printf("���\n");
	}
	return 0;
}

