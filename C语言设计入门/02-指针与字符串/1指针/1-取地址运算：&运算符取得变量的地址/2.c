#include <stdio.h>

int main(void) {
	int i = 0;
	int p;
	p = (int)&i;
	printf("0x%x\n",p); 
	printf("0x%x\n", &i);
	printf("%p\n", &i); 
} 
