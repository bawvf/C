#include <stdio.h>
#include <string.h> 
int main(void) {
	
	char x[40];
	int d; 
	 
	printf("����������������:");
	scanf("%s", x);
	
	d = strlen(x); 
	
	printf("a:����������:\"%s\"��\n",x);
	printf("b:����������:\"%20s\"��\n",x);
	printf("a:����������:\"%-20s\"��\n",x);
	printf("a:����������:\"%*s\"��\n",d + 3,x);
		
	return 0; 
} 
