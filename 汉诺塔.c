#include <stdio.h>
/*
��ŵ����
	 1.һ��ֻ��һ��
	 2.Сѹ��
	 3.A-->C 
	˼·�� 
			A      B    C
			1(n) 
			1	  (n)		---(n)�ƹ�C�ŵ�B 
			(n)		    1	---(n)�ƹ�B�ŵ�C 
			            1(n)		
*/
void hanoi_game(int n,char a,char b,char c){
	void move(char a,char c);
	if(n == 1)
		move(a,c);
	else{
		hanoi_game(n-1,a,c,b);
		move(a,c);
		hanoi_game(n-1,b,a,c);
	}
		 
}
void move(char x,char y){
	printf("%c�ƶ���%c\n",x,y);
}
int main(){
	int num = 0;
	printf("����������:>"); 
	scanf("%d",&num);
	printf("�ƶ����裺\n");
	hanoi_game(num,'A','B','C');
	
	return 0;
} 
