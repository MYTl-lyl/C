//������,���Ӯ'*',����Ӯ'#',ƽ��'Q',����'C' 

#include<stdio.h> 
#define ROW 5//���� 
#define COL 5//���� 
#include<time.h> 

void menu()
{
	printf("********************************\n");
	printf("*******1.play     0.exit********\n");
	printf("********************************\n");
}

void InitBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
			
		}
	} 
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
			//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//��ӡ����
            int j=0;
			for(j=0;j<col;j++)
			{
				printf(" %c ",board[i][j]);
				if(j<col-1)
					printf("|");
			} 
	       printf("\n");
		   if(i<row-1)
	       {
	       	    for(j=0;j<col;j++)
	       	    {
    	       		printf("---");//��ӡ�ָ���
    	       		if(j<col-1)
		       	    	printf("|");
    	       	}
       	   }
		   printf("\n");		 	 
	}
	
}
//��ӡ����� 
//  1.1 |   |   ���� 
//   ---|---|---�ָ��� 
//      |   |   
//   ---|---|---
//      |   |   

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("����ߣ�>\n");
	while(1)
	{
		printf("������Ҫ�µ�����:>"); 
		scanf("%d%d",&x,&y);
    	//�ж�����Ϸ���
	    if(x>=1 && x<=row && y>=1 && y<=col) 
     	{
		    if(board[x-1][y-1]==' ')
		    {
    			 board[x-1][y-1]='*';
    			 break;
    		}
    		else
		    {
		    	printf("�����걻ռ��\n");
		    	
		    }
	    }
    	else
	    {
		    printf("����Ƿ������������룺>");
		
	    }
	}
	
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����ߣ�>\n"); 
	while(1)
	{
		x=rand()%row;
	    y=rand()%col;
		if(board[x][y]==' ') 
	         board[x][y]='#';
	         break;
	} 
	
	
}
//����1��ʾ�������ˣ�0��ʾû�� 
int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//û�� 
			}
		}
	}
	return 1;//���� 
}

char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)//������ 
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for(i=0;i<col;i++)//������ 
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] &&board[0][i]!=' ')
        {
        	return board[0][i];
        }
	}
	//�����Խ��� 
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
	{
		return board[0][2];
	}
	//�ж��Ƿ�ƽ��
	if(1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C'; 
}
   

void game()
{
	char ret=0;
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);//��ʼ������ ��initialization��ʼ�� 
 	DisplayBoard(board,ROW,COL);//��ӡ���� ��display��ʾ 
 	//����
	while(1)
	{
		//�����
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//������ 
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL); 
		// �жϵ����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("���Ӯ\n");
	} 
	else if(ret=='#')
	{
	    printf("����Ӯ\n");	
		
	}
	else
	{
		printf("ƽ��\n");   
	}
}

void test()
{
    int input=0;
	do{
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��>");
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
                printf("�Ƿ�����,������ѡ��\n");
                break;
		}
	}while(input);
}
 
int main()
{
	test();
	return 0;
}