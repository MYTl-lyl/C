#include<stdio.h>
#define ROW 9 
#define COL 9 
#define ROWS ROW+2 
#define COLS COL+2
#define EASY_COUNT 20
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("*****1.play      0.exse******\n");
	printf("*****************************\n");
}

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)//set���� 
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}
 
void DisPlayBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	//��ӡ�к�
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);
	} 
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=EASY_COUNT;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--; 
		}
	}
}
//'1'-'0'=1 ����0��-��0��=0 
// �ַ�1��ȥ�ַ�0��������1 
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x-1][y]+
	mine[x-1][y-1]+
	mine[x][y-1]+
	mine[x+1][y-1]+
	mine[x+1][y]+
	mine[x+1][y+1]+
	mine[x][y+1]+
	mine[x-1][y+1]-8*'0'; 
}

void FidMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;
	//9*9-1=71
	while(win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵�����:>");
	    scanf("%d%d",&x,&y);
	    if(x>=1 && x<=row && y>=1 && y<=col)
	    {
		     //����Ϸ� 
		     //1.���� 
		     if(mine[x][y]=='1')
		     {
     			printf("���ź����㱻ը���ˣ�\n");
     			DisPlayBoard(mine,row,col);
     			break;
     		 }
     		 //2.������ 
     		 else
		  	 {
 		        //����x,y ������Χ�м�����
				 int count=get_mine_count(mine,x,y); 
				 show[x][y]=count+'0';//����+��0��=�ַ� 
				 DisPlayBoard(show,row,col);
				 win++;
				 
             }
		
	    } 
	    else
	    {  
	        //���겻�Ϸ�
            printf("��������Ƿ�������������!\n");
		
	    } 
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
	    DisPlayBoard(mine,row,col);
	}
}

void game()
{
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS]={ 0 };//11*11
	//2.�Ų��׵���Ϣ
	char show[ROWS][COLS]={ 0 };
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ���� ,����ӡmine ��ֻ��ӡshow 
	DisPlayBoard(show,ROW,COL); 
	//�����ף�����ӡ 
	SetMine(mine,ROW,COL); 
	//ɨ�� 
	FidMine(mine,show,ROW,COL);
	
	
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
    do
	{	
		menu();
		printf("��ѡ��>\n");
		scanf("%d",&input);
		switch(input)
		{
		   case 1:
		       game();
			   break;
		   case 0:
		       printf("�˳���Ϸ\n");
			   break;
		   default:
		       printf("�Ƿ�������������ѡ��:>\n");
			   break;	   	
		}
		
	}while(input);//��0Ϊ�����ѭ����Ϊ0Ϊ������ѭ�� 
}

int main()
{
	test();
	return 0;
} 