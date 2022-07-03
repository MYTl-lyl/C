#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//qsort - �⺯�� - ����
//void qsort(void *b,size_t num,size_t width,int(*cmp)(const void *e1,const void *e2))
//��һ���������������������Ԫ�ص�ַ
//�ڶ��������������������Ԫ�ظ���
//�����������������������ÿ��Ԫ�ش�С--�ֽ� 
//���ĸ�����������ָ�룬�Ƚ�����Ԫ�ص����к����ĵ�ַ-�������ʹ�����Լ�ʵ�� 
//			  ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ 
//!!!!#####void*���͵�ָ����Խ����������͵ĵ�ַ
//!!!!#####void*���͵�ָ�벻�ܽ��н����ò���
//!!!!#####void*���͵�ָ�벻�ܽ���+-�����Ĳ���

struct Stu{
	char name[20];
	int age; 
};


int cmp_int(const void* e1,const void* e2){//�ȽϺ����涨����������ӣ�����>0,=0,<0
	//�Ƚ���������
	return *(int*)e1 - *(int*)e2;
					
}
/*

int cmp_float(const void* e1,const void* e2){//�ȽϺ����涨����������ӣ�����>0,=0,<0
	//�Ƚ����������� 
	//return ((int)*(float*)e1 - *(float*)e2);
	if(*(float*)e1 == *(float*)e2){
		return 0;
	} else if(*(float*)e1 > *(float*)e2){
		return 1;
	}else{
		return -1;
	}
					
}
*/

int cmp_struct_byage(const void* e1,const void* e2){//�ȽϺ����涨����������ӣ�����>0,=0,<0
	//�ȽϹ�������---���� 
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;				
}
/*
int cmp_struct_byname(const void* e1,const void* e2){//�ȽϺ����涨����������ӣ�����>0,=0,<0
	//�ȽϹ�������--���� 
	//ʹ��strcmp�����Ƚ������ַ��� 
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);				
}

void test1(){
	int arr[10]={0,9,8,6,5,4,2,3,1,7};
	int sz = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);//��������

	int i = 0;
	for(i=0;i<sz;i++){
		printf("%d ",arr[i]);
	}
}

void test2(){
	float f[]={2.0,7.0,3.0,5.0,3.0};
	int sz = sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);//����������	
	int i = 0;
	for(i=0;i<sz;i++){
		printf("%f ",f[i]);
	}
}

void test3(){
	struct Stu s[3]={{"����",21},{"����",23},{"����",19}};
	int sz = sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_struct_byage);//����
	int i = 0;
	for(i=0;i<sz;i++){
		printf("%d ",s[i].age);
	}
	
	qsort(s,sz,sizeof(s[0]),cmp_struct_byname);//����
	int j = 0;
	for(j=0;j<sz;j++){
		printf("%s ",s[j].name);
	}
}
*/

//����
 Swap(char* buf1,char* buf2,int width){
 	int i = 0;
 	for(i=0;i<width;i++){
	 	char tmp = *buf1;
	 	*buf1 = *buf2;
	 	*buf2 = tmp;
	 	buf1++;
	 	buf2++;
	 }
 }
//ð������ 
void bubble_sort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2)){
	int i = 0;
	for(i=0;i<sz-1;i++){//���� 
		 int j=0;
		 for(j=0;j<sz-1-i;j++){//ÿһ�˱ȽϵĶ���
 			//�Ƚ�����Ԫ��
			 if(cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0){
 				//���� 
 				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
 			} 
 		}
	}
	int a = 0;
	for(a=0;a<sz;a++){
		printf("%d ", *((char*)base+a*width));
	}
}
void test4(){
	int arr[10]={0,9,8,6,5,4,2,3,1,7};
	int sz = sizeof(arr)/sizeof(arr[0]);
	//ʹ��ð�� 
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}

void test5(){
	struct Stu s[3]={{"����",21},{"����",23},{"����",19}};
	int sz = sizeof(s)/sizeof(s[0]);
	//ʹ��ð�� 
	bubble_sort(s,sz,sizeof(s[0]),cmp_struct_byage);
}
int main(){
//ʹ�� qsort ���� 
//	test1();//�������� 
//	test2();//���������� 
//	test3();//����

//ʹ�� ð�� ����
	test4();
//	test5(); 
	return 0;
}
