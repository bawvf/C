#include <stdio.h>
int main(void) {
	
	float a,b;
	
	scanf("%f %f",&a,&b);
	
	printf("The input is %.1f or %.1e.\n",a, a);
	printf("The input is %+.3f or %.3E.\n",b, b);
	
	return 0; 
} 
