#include <stdio.h>
int main(void) {
	
	double weight,number;
	
	printf("����ˮ��������");
	scanf("%lf",&weight);
	
	number = weight * 950 / 3.0e-23;
	printf("һ����%.0lf��ˮ����",number);
	
	return 0; 
} 
