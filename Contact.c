#include "contact.h" 

//函数定义 

//通讯录初始化 
void InitContact(struct Contact* ps){
//	memset(ps->data,0,sizeof(ps->data));
//	ps->size = 0;//设置通讯录最初只有0个元素
	 ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ*sizeof(struct PeoInfo)); 
	if(ps->data == NULL){
		return;
	} 
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把文件中已有的信息加载到通讯录
	LoadContact(ps); 
	 
}
//声明增容函数
void  CheckCapacity(struct Contact* ps); 
//加载信息
void LoadContact(struct Contact* ps){
	struct PeoInfo tmp = {0};
	FILE* pfRead = fopen("contact.dat","rb");
	if(pfRead == NULL){
		printf("%s\n",strerror(errno));
		return;
	} 
	//读文件，放到通讯录 
	while(fread(&tmp,sizeof(struct PeoInfo),1,pfRead)){//返回的是实际读取的元素个数 
		 CheckCapacity(ps); 
		 ps->data[ps->size] = tmp;
		 ps->size++;
	}
	//关闭文件
	fclose(pfRead);
	pfRead = NULL; 
} 
//检测通讯录容量
void  CheckCapacity(struct Contact* ps){
	if(ps->size == ps->capacity){
		//增容 --- 每次增加2个 
		 struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data,(ps->capacity+2)*sizeof(struct PeoInfo));
		if(ptr != NULL){
			ps = ptr;
			ps->capacity +=2;
		}
	} 
}
//添加 
void AddContact(struct Contact* ps){ 
	//检测当前通讯录的容量
	//1.满了，增加空间
	//2.不满，不干事 
	CheckCapacity(ps); 
	//增加数据 
//	if(ps->size == MAX){
//		printf("通讯录已满，无法增加\n");
//	}else {
		printf("请输入名字:>");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s",ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s",ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s",ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
//	}	
}

//空间释放
void DestroyContact(struct Contact* ps){
	free(ps->data);
	ps->data = NULL;	
} 

//显示 
void ShowContact(const struct Contact* ps){ 
	if(ps->size == 0){
		printf("通讯录为空\n");
	}else{
		int i =0;
		//\t ---- table 
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n","名字","年龄","性别","电话","地址"); 
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
//删除 
void DelContact(struct Contact* ps){
	char name[20] = {0};
	printf("请输入需要删除的联系人名字:>");
	scanf("%s",&name);
	//1.查找删除的联系人位置 
	int pos = FindByName(ps,name);//找到返回小标，没找到返回-1； 
	if(pos == -1){
		printf("需要删除的联系人不存在\n");
	}else{
		//删除数据
		int j = 0;
		for(j=pos;j<ps->size-1;j++){
			ps->data[j] = ps->data[j+1];
		} 
		ps->size--;
		printf("删除成功\n");
	}
}
//查找
void SearchContact(const struct Contact* ps){
 	char name[MAX_NAME] = {0};
	printf("请输入需要查找的成员名字:>");
	scanf("%s",&name);
	int pos = FindByName(ps,name);
	if(pos == -1){
		printf("该联系人不存在\n");
	}else{
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n","名字","年龄","性别","电话","地址"); 
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n",ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr );		 
	}
 }
 
 //修改
 void ModifyContact(struct Contact* ps){
 	char name[20] = {0};
	printf("请输入需要修改的成员名字:>");
	scanf("%s",&name);
	int pos = FindByName(ps,name);
	if(pos == -1){
		printf("不存在该联系人\n");
	} else{
		printf("请输入名字:>");
		scanf("%s",ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d",&(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s",ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s",ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s",ps->data[pos].addr);
		
		printf("修改成功\n");	
	}	
 }
 //排序
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
 //保存 
 void SaveContact(const struct Contact* ps){
 	FILE* pf = fopen("contact.dat","wb"); 
	if(pf == NULL){
		printf("%s\n",strerror(errno));
		return;
	}  
	//写通讯录数据到文件
	int i = 0;
	for(i=0;i<ps->size;i++){
		fwrite(&(ps->data[i]),sizeof(struct PeoInfo),1,pf);	
	} 
 	//关闭文件
	fclose(pf);
	pf = NULL;  
 }
 