//��������Ϸ��������� 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	//���������,rand() 0~32767 
	//������
	//time_t time(time_t *timer),time_t�������ǳ�����long   
	int ret=0;
	int guess=0;
	ret=rand()%100+1 ;
	while(1)
	{
		printf("�������:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n"); 
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
	srand((unsigned int)time(NULL));//ʱ���������������,NULL��ָ�루�������κζ�����
    do
    {
    	menu();
    	printf("��ѡ��>:");
    	scanf("%d",&input);
    	switch(input)
		{
			case 1:
			    game();//��Ϸ���� 
			    break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("ѡ�����\n");
                break;
		} 
    }while(input);
	return 0;
}