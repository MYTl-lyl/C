#include "contact.h"

/*
测试 
*/
/*
实现函数功能：
	1.1000个好友信息（名字+电话+性别+住址+年龄） 
	2.增加好友信息
	3.删除指定名字的好友信息
	4.查找好友信息 
	5.修改好友信息 
	6.打印好友信息
	 
*/ 
menu(){
	printf("*************************************\n");
	printf("***** 1.add           2.del    ******\n");
	printf("***** 3.search        4.modify ******\n");
	printf("***** 5.show          6.sort   ******\n");
	printf("***** 0.exit                   ******\n");
	printf("*************************************\n");
}
int main(){
	int input = 0;
	//创建通讯录
    struct Contact con; //con就是通讯录，包含1000个元素和size 
    //初始化通讯录
    InitContact(&con);
	do{
		menu();	
		printf("请选择：>");
		scanf("%d",&input);
		switch(input){
			case ADD:
				AddContact(&con);//增加 
				break;
			case DEL:
				DelContact(&con);//删除 
				break;
			case SEARCH:
				SearchContact(&con);//查找 
				break;
			case MODIFY:
				ModifyContact(&con);//修改 
				break;
			case SHOW:
				ShowContact(&con);//展示 
				break;
			case SORT:
			    SortContact(&con);//排序 
			    break;
   			case EXIT:
   				printf("退出通讯录\n");
   				break;
			default:
				printf("选择错误\n");
				break;
		}
		
	}while(input);
	return 0;
} 
