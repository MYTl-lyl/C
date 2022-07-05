#include <stdio.h>
/*
喝汽水：1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以喝多少汽水？ 
*/

int main(){
	int money = 20;
	int total = 0;//喝汽水数
	int empty = 0;//空瓶数 
	scanf("%d",&money);
	/*
	//方法2： 
	if(money == 0){
		total = 0;
	}else{
		total = 2*money-1;
	}*/
	//方法1： 
	//买回来的汽水 
	total = money;
	empty = total;
	//兑换的汽水
	 while(empty>=2){
 		total += empty/2;
 		empty = empty/2+empty%2;
	 }
	printf("%d",total);
}
