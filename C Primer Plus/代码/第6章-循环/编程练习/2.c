#include <stdio.h>
int main(void) {
	int i, a;
	
	for (i = 1; i <= 5; i++) {
		for (a = 1; a <= i; a++)
			printf("$"); 
		printf("\n");	
	}
	
	return 0; 
		
} 
