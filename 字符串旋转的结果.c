#include <stdio.h>
#include <string.h>
#include <assert.h> 

/*
�ַ�����ת�Ľ����
	дһ���������ж��ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ�����
	���磺
		����s1=AABCD��s2=BCDAA������1
		����s1=abcd��s2=ACBD �� ����0
		
		AABCD����һ���ַ���ABCDA
		AABCD���������ַ���BCDAA
		AABCD����һ���ַ���DAABC
		 
*/
/*
//��һ�� 
//abcd
//bcda
//cdab
//dabc
void reverse(char* left,char* right){
	assert(left!=NULL);
	assert(right!=NULL);
	
	while(left<right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--; 
	}
}
void left_move(char* str,int k,int len){
	assert(k<=len);
	reverse(str,str+k-1);//�������
	reverse(str+k,str+len-1);//�����ұ� 
	reverse(str,str+len-1);//�������� 
}
int is_left_move(char* s1,char* s2){
	 int len = strlen(s1);
	 int i = 0;
	 for(i=0;i<len;i++){
 		left_move(s1,1,len);
 		int ret = strcmp(s1,s2);//��s1==s2ʱ������ֵ=0,��s1<s2ʱ������ֵ<0,��s1>s2ʱ������ֵ>0,
 		if(ret == 0){
		 	return 1;
	    }
 	 } 
 	 return 0;
}*/

//������abcdabcd---˼�� 
int is_left_move(char* str1,char* str2){
	//1.��str1��׷��strl
	//strcat(str1,str2)----��str2׷�ӵ�str1��ߣ����ǲ����Լ����Լ�׷��
	//strncat(str1,str2,sz)----��str2��sz���ַ�׷�ӵ�str1���
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 != len2){
		return 0;
	} 
	strncat(str1,str1,len1); 
	//2. �ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	//strstr ----���Ӵ� 
	char* ret = strstr(str1,str2); 
	if(ret == NULL){
		return 0;
	}else{
		return 1;
	}
	 
}
int main(){
	char arr1[] = "abcd";
	char arr2[] = "cdab";
	int ret = is_left_move(arr1,arr2);
	if(ret == 1){
		printf("Yes"); 
	}else{
		printf("No");
	}
	return 0;
}
