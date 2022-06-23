//猜数字游戏，猜随机数 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	//生成随机数,rand() 0~32767 
	//猜数字
	//time_t time(time_t *timer),time_t本质上是长整型long   
	int ret=0;
	int guess=0;
	ret=rand()%100+1 ;
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n"); 
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}    
	}
	
}

void menu()
{
    printf("***************************\n");
	printf("***   1. play  0.exit   ***\n");
	printf("***************************\n");	
}

int main() 
{
	int input=0;
	srand((unsigned int)time(NULL));//时间戳设置随机数起点,NULL空指针（不产生任何东西）
    do
    {
    	menu();
    	printf("请选择>:");
    	scanf("%d",&input);
    	switch(input)
		{
			case 1:
			    game();//游戏过程 
			    break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
		} 
    }while(input);
	return 0;
}