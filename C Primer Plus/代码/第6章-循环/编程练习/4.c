#include <stdio.h>
int main(void) {
	int i, a,  b = 65;
	
	for (i = 1; i <= 6; i++) {
		for (a = 1; a <= i; a++,b++)
			printf("%3c", b) ;
		printf("\n"); 
	} 
	
	return 0; 
} 
