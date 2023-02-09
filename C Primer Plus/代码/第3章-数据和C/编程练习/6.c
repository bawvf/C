#include <stdio.h>
int main(void) {
	
	double weight,number;
	
	printf("输入水的重量：");
	scanf("%lf",&weight);
	
	number = weight * 950 / 3.0e-23;
	printf("一共有%.0lf个水分子",number);
	
	return 0; 
} 
