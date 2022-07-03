#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//qsort - 库函数 - 排序
//void qsort(void *b,size_t num,size_t width,int(*cmp)(const void *e1,const void *e2))
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组的每个元素大小--字节 
//第四个参数：函数指针，比较两个元素的所有函数的地址-这个函数使用者自己实现 
//			  函数指针的两个参数是：待比较的两个元素的地址 
//!!!!#####void*类型的指针可以接受任意类型的地址
//!!!!#####void*类型的指针不能进行解引用操作
//!!!!#####void*类型的指针不能进行+-整数的操作

struct Stu{
	char name[20];
	int age; 
};


int cmp_int(const void* e1,const void* e2){//比较函数规定，两个数相加，返回>0,=0,<0
	//比较两个整形
	return *(int*)e1 - *(int*)e2;
					
}
/*

int cmp_float(const void* e1,const void* e2){//比较函数规定，两个数相加，返回>0,=0,<0
	//比较两个浮点数 
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

int cmp_struct_byage(const void* e1,const void* e2){//比较函数规定，两个数相加，返回>0,=0,<0
	//比较构造类型---年龄 
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;				
}
/*
int cmp_struct_byname(const void* e1,const void* e2){//比较函数规定，两个数相加，返回>0,=0,<0
	//比较构造类型--名字 
	//使用strcmp函数比较俩个字符串 
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);				
}

void test1(){
	int arr[10]={0,9,8,6,5,4,2,3,1,7};
	int sz = sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);//整形排序

	int i = 0;
	for(i=0;i<sz;i++){
		printf("%d ",arr[i]);
	}
}

void test2(){
	float f[]={2.0,7.0,3.0,5.0,3.0};
	int sz = sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);//浮点型排序	
	int i = 0;
	for(i=0;i<sz;i++){
		printf("%f ",f[i]);
	}
}

void test3(){
	struct Stu s[3]={{"张三",21},{"李四",23},{"王五",19}};
	int sz = sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_struct_byage);//排序
	int i = 0;
	for(i=0;i<sz;i++){
		printf("%d ",s[i].age);
	}
	
	qsort(s,sz,sizeof(s[0]),cmp_struct_byname);//排序
	int j = 0;
	for(j=0;j<sz;j++){
		printf("%s ",s[j].name);
	}
}
*/

//交换
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
//冒泡排序 
void bubble_sort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2)){
	int i = 0;
	for(i=0;i<sz-1;i++){//趟数 
		 int j=0;
		 for(j=0;j<sz-1-i;j++){//每一趟比较的对数
 			//比较两个元素
			 if(cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0){
 				//交换 
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
	//使用冒泡 
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}

void test5(){
	struct Stu s[3]={{"张三",21},{"李四",23},{"王五",19}};
	int sz = sizeof(s)/sizeof(s[0]);
	//使用冒泡 
	bubble_sort(s,sz,sizeof(s[0]),cmp_struct_byage);
}
int main(){
//使用 qsort 方法 
//	test1();//整数排序 
//	test2();//浮点数排序 
//	test3();//构造

//使用 冒泡 方法
	test4();
//	test5(); 
	return 0;
}
