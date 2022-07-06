#include <stdio.h>
#include <string.h>
#include <assert.h> 

/*
字符串旋转的结果：
	写一个函数，判断字符串是否为另一个字符串旋转之后的字符串。
	例如：
		给定s1=AABCD和s2=BCDAA，返回1
		给定s1=abcd和s2=ACBD ， 返回0
		
		AABCD左旋一个字符得ABCDA
		AABCD左旋两个字符得BCDAA
		AABCD右旋一个字符得DAABC
		 
*/
/*
//法一： 
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
	reverse(str,str+k-1);//逆序左边
	reverse(str+k,str+len-1);//逆序右边 
	reverse(str,str+len-1);//逆序整体 
}
int is_left_move(char* s1,char* s2){
	 int len = strlen(s1);
	 int i = 0;
	 for(i=0;i<len;i++){
 		left_move(s1,1,len);
 		int ret = strcmp(s1,s2);//当s1==s2时，返回值=0,当s1<s2时，返回值<0,当s1>s2时，返回值>0,
 		if(ret == 0){
		 	return 1;
	    }
 	 } 
 	 return 0;
}*/

//法二：abcdabcd---思考 
int is_left_move(char* str1,char* str2){
	//1.在str1中追加strl
	//strcat(str1,str2)----把str2追加到str1后边，但是不能自己给自己追加
	//strncat(str1,str2,sz)----把str2的sz个字符追加到str1后边
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 != len2){
		return 0;
	} 
	strncat(str1,str1,len1); 
	//2. 判断str2指向的字符串是否是str1指向的字符串的子串
	//strstr ----找子串 
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
