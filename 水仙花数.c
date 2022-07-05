#include <stdio.h>
#include <math.h>
//8. 打印水仙花数：求出0-10000之间所有的水仙花数
//“水仙花数”指一个n位数，其各位数字的n次方之和恰好等于该数本身，如：
//153 = 1^3 +5^3 + 3^3

int count_num(int num){//位数 
	int count = 0;
	while(num){
		num = num/10;
		count++;
	}
	return count;
}

int daffodil_num(int num,int count){
	int sum = 0;
	while(num){
 		sum += pow(num%10,count);
	 	num = num/10;
	}
	return sum;
}

int main(){
	int count = 0;
	int sum = 0;
	int i = 0;
	for(i=0;i<100000;i++){
		//判断i是否为水仙花数（自幂数） 
		//1.计算i的位数
		count = count_num(i);
		//2.计算i的每位的n次方之和 sum
		sum = daffodil_num(i,count);
		//3.比较i==sum
		if(i == sum){
			printf("%d ",i);
		} 
	}
}
