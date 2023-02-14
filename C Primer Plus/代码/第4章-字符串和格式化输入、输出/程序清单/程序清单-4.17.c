#include <stdio.h>
int main(void) {
	int n;
	
	printf("Plesae enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\nb", n);
	
	return 0; 
} 
