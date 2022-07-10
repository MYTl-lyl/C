#include "contact.h" 

//�������� 

//ͨѶ¼��ʼ�� 
void InitContact(struct Contact* ps){
	memset(ps->data,0,sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ�� 
}
//��� 
void AddContact(struct Contact* ps){ 
	if(ps->size == MAX){
		printf("ͨѶ¼�������޷�����\n");
	}else {
		printf("����������:>");
		scanf("%s",ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s",ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s",ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s",ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}	
}
//��ʾ 
void ShowContact(const struct Contact* ps){ 
	if(ps->size == 0){
		printf("ͨѶ¼Ϊ��\n");
	}else{
		int i =0;
		//\t ---- table 
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n","����","����","�Ա�","�绰","��ַ"); 
		for(i=0;i<ps->size;i++){
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr
			);
		}
	}
}
static int FindByName(const struct Contact* ps,char name[MAX_NAME]){
	int i =0;
	for(i=0;i< ps->size;i++){
		if(strcmp(name, ps->data[i].name) == 0)  
		{
			return i;
		}
	}
	return -1;	
}
//ɾ�� 
void DelContact(struct Contact* ps){
	char name[20] = {0};
	printf("��������Ҫɾ������ϵ������:>");
	scanf("%s",&name);
	//1.����ɾ������ϵ��λ�� 
	int pos = FindByName(ps,name);//�ҵ�����С�꣬û�ҵ�����-1�� 
	if(pos == -1){
		printf("��Ҫɾ������ϵ�˲�����\n");
	}else{
		//ɾ������
		int j = 0;
		for(j=pos;j<ps->size-1;j++){
			ps->data[j] = ps->data[j+1];
		} 
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
//����
void SearchContact(const struct Contact* ps){
 	char name[MAX_NAME] = {0};
	printf("��������Ҫ���ҵĳ�Ա����:>");
	scanf("%s",&name);
	int pos = FindByName(ps,name);
	if(pos == -1){
		printf("����ϵ�˲�����\n");
	}else{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n","����","����","�Ա�","�绰","��ַ"); 
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr );		 
	}
 }
 
 //�޸�
 void ModifyContact(struct Contact* ps){
 	char name[20] = {0};
	printf("��������Ҫ�޸ĵĳ�Ա����:>");
	scanf("%s",&name);
	int pos = FindByName(ps,name);
	if(pos == -1){
		printf("�����ڸ���ϵ��\n");
	} else{
		printf("����������:>");
		scanf("%s",ps->data[pos].name);
		printf("����������:>");
		scanf("%d",&(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s",ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s",ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s",ps->data[pos].addr);
		
		printf("�޸ĳɹ�\n");	
	}	
 }
 //����
 void SortContact (struct Contact* ps){
 	struct PeoInfo a = {0};
 	int i = 0;
 	for(i=0;i<ps->size-1;i++){
	 	int j=0;
	 	for(j=0;j<ps->size-1-i;j++){
	 		if(ps->data[j].age > ps->data[j+1].age){
		 		a = ps->data[j];
		 		ps->data[j] = ps->data[j+1];
		 		ps->data[j+1] = a;
		 	}
	 	}
	 }
 } 
 