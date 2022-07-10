#ifndef _MYHEAD_H_
#define _MYHEAD_H_

#include <stdio.h> 
#include <string.h>


#define MAX 1000
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
	SORT
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
	struct PeoInfo data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���	 
}; 

//��������
void InitContact(struct Contact* ps);//ͨѶ¼��ʼ�� 
void AddContact(struct Contact* ps);//��� 
void ShowContact(const struct Contact* ps);//չʾ 
void DelContact(struct Contact* ps);//ɾ�� 
void SearchContact(const struct Contact* ps);//���� 
void ModifyContact(struct Contact* ps); //�޸� 
void SortContact (struct Contact* ps); //���� 
#endif /* _MYHEAD_H_ */
