#include <stdio.h>
#define YEAR 3.156e7
 
int main(void) {
	float year;
	double second; 
	
	printf("������ݣ�");
	scanf("%f", &year); 
	second = year * YEAR; 
	printf("%e",second);
	
	return 0; 
} 
