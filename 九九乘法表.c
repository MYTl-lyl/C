//����Ļ�����9*9�˷��ھ��� 

#include<stdio.h>

int main()
{
	int i=0;
	//��ӡ���� 
	for(i=1;i<=9;i++)
	{
		//��ӡһ�� 
		int j=0;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);//%-2d��ָ��ӡ��λ�����	
		}
		printf("\n");
	}
	 return 0;
} 