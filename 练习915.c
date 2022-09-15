#include<stdio.h>
#include<math.h>
#include<string.h>

//求字符的ASCLL码值 
/*int main(){
	char a ;
	scanf("%c",&a);
	printf("%d",a);	
} */

//输入字符,输出前导字符，该字符，后续字符
/* int main(){
 	char z,x,y;
 	scanf("%c",&z);
 	x = z-1;
 	y = z+1;
 	printf("前导符:%c \n该字符:%c\n后续符:%c",x,z,y);
 }*/
 
 //输入一个10进制整数，输出它的8进制和16进制 
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
    printf("8进制：%.0f\n",b);
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
	 printf("16进制:");
     for(int i = t;i>=0;i--){
     	printf("%c",c[i]);
     }
	 printf("\n");
 } */