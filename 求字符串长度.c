#include <stdio.h>
#include <assert.h> 
//求字符串长度
 
//const修饰*str,不能修改*str值 
int my_strlen(const char* str){
	int count = 0;
	assert(str != NULL);//断言,保证指针有效性 
	while(*str != '\0'){
		count++;
		str++;
	} 
	 return count;
}

int main(){
	char arr[]="abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
