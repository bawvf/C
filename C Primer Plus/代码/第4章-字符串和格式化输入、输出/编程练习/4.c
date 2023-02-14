#include <stdio.h>
int main(void) {
	
	float a;
	char b[40];
	
	printf("您的名字:"); 
	scanf("%s",b);
	printf("您的身高:"); 
	scanf("%f",&a);
	 
	a /= 12.0;
	
	printf("%s, you are %.3f feet tall.\n",b,a);
	
	return 0; 
} 
