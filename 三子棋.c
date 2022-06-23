//三子棋,玩家赢'*',电脑赢'#',平局'Q',继续'C' 

#include<stdio.h> 
#define ROW 5//三行 
#define COL 5//三列 
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
			//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//打印数据
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
    	       		printf("---");//打印分割线
    	       		if(j<col-1)
		       	    	printf("|");
    	       	}
       	   }
		   printf("\n");		 	 
	}
	
}
//打印结果： 
//  1.1 |   |   数据 
//   ---|---|---分割行 
//      |   |   
//   ---|---|---
//      |   |   

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("玩家走：>\n");
	while(1)
	{
		printf("请输入要下的坐标:>"); 
		scanf("%d%d",&x,&y);
    	//判断坐标合法性
	    if(x>=1 && x<=row && y>=1 && y<=col) 
     	{
		    if(board[x-1][y-1]==' ')
		    {
    			 board[x-1][y-1]='*';
    			 break;
    		}
    		else
		    {
		    	printf("该坐标被占用\n");
		    	
		    }
	    }
    	else
	    {
		    printf("坐标非法，请重新输入：>");
		
	    }
	}
	
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑走：>\n"); 
	while(1)
	{
		x=rand()%row;
	    y=rand()%col;
		if(board[x][y]==' ') 
	         board[x][y]='#';
	         break;
	} 
	
	
}
//返回1表示棋盘满了，0表示没满 
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
				return 0;//没满 
			}
		}
	}
	return 1;//满了 
}

char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)//横三行 
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for(i=0;i<col;i++)//竖三列 
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] &&board[0][i]!=' ')
        {
        	return board[0][i];
        }
	}
	//两个对角线 
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
	{
		return board[0][2];
	}
	//判断是否平局
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
	InitBoard(board,ROW,COL);//初始化棋盘 ，initialization初始化 
 	DisplayBoard(board,ROW,COL);//打印棋盘 ，display显示 
 	//下棋
	while(1)
	{
		//玩家下
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断玩家是否赢
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//电脑下 
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL); 
		// 判断电脑是否赢
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("玩家赢\n");
	} 
	else if(ret=='#')
	{
	    printf("电脑赢\n");	
		
	}
	else
	{
		printf("平局\n");   
	}
}

void test()
{
    int input=0;
	do{
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			    game();
			    break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("非法输入,请重新选择\n");
                break;
		}
	}while(input);
}
 
int main()
{
	test();
	return 0;
}