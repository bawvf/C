#include <stdio.h>
#include <string.h> 
int main(void) {
	
	char x[40];
	int d; 
	 
	printf("请输入您的名和姓:");
	scanf("%s", x);
	
	d = strlen(x); 
	
	printf("a:您的姓名是:\"%s\"。\n",x);
	printf("b:您的姓名是:\"%20s\"。\n",x);
	printf("a:您的姓名是:\"%-20s\"。\n",x);
	printf("a:您的姓名是:\"%*s\"。\n",d + 3,x);
		
	return 0; 
} 
