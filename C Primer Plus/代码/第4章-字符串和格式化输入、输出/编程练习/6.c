#include <stdio.h>
#include <string.h> 
int main(void) {
	char x[40],m[40];
	 
	printf("����������������:");
	scanf("%s %s", x, m);
	
	printf("%s %s\n",x, m);
	printf("%-*d %-*d\n",strlen(x),strlen(x),strlen(m),strlen(m)); 
	
	printf("%s %s\n",x, m);
	printf("%*d %*d\n",strlen(x),strlen(x),strlen(m),strlen(m));
	
	return 0; 
} 
