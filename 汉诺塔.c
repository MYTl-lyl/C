#include <stdio.h>
/*
汉诺塔：
	 1.一次只动一个
	 2.小压大
	 3.A-->C 
	思路： 
			A      B    C
			1(n) 
			1	  (n)		---(n)绕过C放到B 
			(n)		    1	---(n)绕过B放到C 
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
	printf("%c移动到%c\n",x,y);
}
int main(){
	int num = 0;
	printf("请输入塔数:>"); 
	scanf("%d",&num);
	printf("移动步骤：\n");
	hanoi_game(num,'A','B','C');
	
	return 0;
} 
