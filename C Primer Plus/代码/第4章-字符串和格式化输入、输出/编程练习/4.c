#include <stdio.h>
int main(void) {
	
	float a;
	char b[40];
	
	printf("��������:"); 
	scanf("%s",b);
	printf("�������:"); 
	scanf("%f",&a);
	 
	a /= 12.0;
	
	printf("%s, you are %.3f feet tall.\n",b,a);
	
	return 0; 
} 
