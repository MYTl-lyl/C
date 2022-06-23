//在屏幕上输出9*9乘法口诀表 

#include<stdio.h>

int main()
{
	int i=0;
	//打印九行 
	for(i=1;i<=9;i++)
	{
		//打印一行 
		int j=0;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);//%-2d是指打印两位左对齐	
		}
		printf("\n");
	}
	 return 0;
} 