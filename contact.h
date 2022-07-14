#ifndef _MYHEAD_H_
#define _MYHEAD_H_

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
/*
函数声明 
*/ 

enum Option{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE 
};


struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact{
	struct PeoInfo* data;//存放信息,可调整 
	int size;//记录当前已经有的元素个数	 
	int capacity;//当前通讯录最大容量 
}; 

//声明函数
void InitContact(struct Contact* ps);//通讯录初始化 
void AddContact(struct Contact* ps);//添加 
void ShowContact(const struct Contact* ps);//展示 
void DelContact(struct Contact* ps);//删除 
void SearchContact(const struct Contact* ps);//查找 
void ModifyContact(struct Contact* ps); //修改 
void SortContact (struct Contact* ps); //排序 
void DestroyContact(struct Contact* ps);//空间释放 
void SaveContact(const struct Contact* ps);//保存 
void LoadContact(struct Contact* ps);//加载文件中的信息 
#endif /* _MYHEAD_H_ */
