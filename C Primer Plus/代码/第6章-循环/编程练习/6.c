#include <stdio.h>
int main(void) {
	int i;
	
	for (i = 1; i <= 100; i++) {
		printf("%10d%10d%10d\n",i, i * i, i * i * i); 
	} 
	
	return 0; 
} 
