#include <stdio.h>
int main(void) {
	
	double number;
	
	printf("Enter a floating-point value: ");
	
	scanf("%lf",&number);
	
	printf("fixed-point notation: %lf\n",number);
	printf("expontial notation: %e\n",number);
	printf("P notation: %a", number); 
	
	return 0; 
} 
