#include <stdio.h>
#define YEAR 3.156e7
 
int main(void) {
	float year;
	double second; 
	
	printf("ÊäÈëÄê·İ£º");
	scanf("%f", &year); 
	second = year * YEAR; 
	printf("%e",second);
	
	return 0; 
} 
