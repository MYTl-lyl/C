#include <stdio.h>
#include <string.h>
/*
//1.������A�����ݺ�����B�����ݽ���������һ����
int main(){
	int A[]={0,1,2,3};
	int B[]={4,5,6,7};
	int t = 0;
	int i = 0;
	int sz = sizeof(A)/sizeof(A[0]);
	for(i=0;i<sz;i++){
		t = A[i];
		A[i] = B[i];
		B[i] = t;
	}
	for(i=0;i<sz;i++){
		printf("%d ",B[i]);
	}	
} */

/*
//2.����int(32)λ����m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ��
//���磺1999 2999   ---- 7
int bit_count(int m ,int n){
	int count = 0;
	int i = 0;
	for(i=0;i<=32;i++){
		if((m>>i&1)==1 && (n>>i&1)==1){
			count++;
		}
	}
	return count;
}

int main(){
	int m = 0;
	int n = 0;
	scanf("%d%d",&m,&n);
	int count = bit_count(m,n);
	printf("count=%d\n", count);	
} */

/*
//3.дһ���������ض�������1�ĸ���
int count_bit(int a){
	int count = 0;
	while(a){
		a = a&(a-1);
		count++;
	}
	return count;
}
int main(){
	int a = 0;
	int count = 0;
	scanf("%d",&a);
	count = count_bit(a);
	printf("count=%d\n",count);
	return 0;
}
*/

/*
//4.��������������������������ʱ������
void exchange(int a,int b){
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a=%d,b=%d\n",a,b);
}
int main(){
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	exchange(a,b);

} */


/*
//5.��ʹ�ÿ⺯��������£����ַ������ݷ�������
char reverse(char a[],int sz){
	char b = 0;
	int left = 0;
	int right = sz-2;
	while(left<=right){
		b = a[left];
		a[left] = a[right];
		a[right] = b;
		left++;
		right--;
	}	
}
int main(){
	char a[] = "abcdef";
	int sz = sizeof(a)/sizeof(a[0]);
	reverse(a,sz);
	printf("%s",a);
	return 0;
}
*/

/*
//6.дһ���ݹ麯��DigitSum(n),����Ǹ����������������������֮��
//���磺DigitSum(1729) --- 1+7+2+9 --19
int DigitSum(int n){
	int sum = 0;	
	if(n>0){
		sum = n%10 + DigitSum(n/10);
	}	
	return sum;
}
int main(){
	int n = 0;
	int sum = 0;
	scanf("%d",&n);
	sum = DigitSum(n);
	printf("sum=%d\n",sum);
	return 0;
}*/

/*
//7.�ݹ�ʵ��n��k�η�
int power(int n,int k){
	k--;
	if(k == 0){
		return n;
	}else{
		return n*(power(n,k));
	}
}
int main(){
	int n = 0;
	int k = 0;
	int p = 0;
	scanf("%d%d",&n,&k);
	p = power(n,k);
	printf("%d\n",p);
	return 0;	
}*/



 