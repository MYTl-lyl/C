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
�������� 
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

//ͨѶ¼����
struct Contact{
	struct PeoInfo* data;//�����Ϣ,�ɵ��� 
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���	 
	int capacity;//��ǰͨѶ¼������� 
}; 

//��������
void InitContact(struct Contact* ps);//ͨѶ¼��ʼ�� 
void AddContact(struct Contact* ps);//��� 
void ShowContact(const struct Contact* ps);//չʾ 
void DelContact(struct Contact* ps);//ɾ�� 
void SearchContact(const struct Contact* ps);//���� 
void ModifyContact(struct Contact* ps); //�޸� 
void SortContact (struct Contact* ps); //���� 
void DestroyContact(struct Contact* ps);//�ռ��ͷ� 
void SaveContact(const struct Contact* ps);//���� 
void LoadContact(struct Contact* ps);//�����ļ��е���Ϣ 
#endif /* _MYHEAD_H_ */
