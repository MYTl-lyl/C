#include<stdio.h>
#include<math.h>
#include<string.h>

//���ַ���ASCLL��ֵ 
/*int main(){
	char a ;
	scanf("%c",&a);
	printf("%d",a);	
} */

//�����ַ�,���ǰ���ַ������ַ��������ַ�
/* int main(){
 	char z,x,y;
 	scanf("%c",&z);
 	x = z-1;
 	y = z+1;
 	printf("ǰ����:%c \n���ַ�:%c\n������:%c",x,z,y);
 }*/
 
 //����һ��10�����������������8���ƺ�16���� 
 /*int main(){
 	int a = 0;
 	float b = 0;
 	char c[100] = "";
 	char c1[100] = "";
 	int d = 0;
 	scanf("%d",&a);
 	d = a;
 	for(int i = 0;a!=0;i++){
	 	b = b + (a%8) * pow(10,i);
		a = a/8;
    }
    printf("8���ƣ�%.0f\n",b);
   	for(int j = 0;d!=0;j++){
		if(d%16 > 9){
			c1[0] = (char)(55+d%16);
		}else if(d%16 < 10){
			c1[0] = (char)(48+d%16);
		} 
 	    strcat(c,c1);
 	    d = d/16;
     }
     int t = strlen(c);
	 printf("16����:");
     for(int i = t;i>=0;i--){
     	printf("%c",c[i]);
     }
	 printf("\n");
 } */