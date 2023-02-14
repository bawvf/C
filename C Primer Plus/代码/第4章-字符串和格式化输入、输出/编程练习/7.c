#include <stdio.h>
#include <float.h>
int main(void) {
	
	double d_third = 1.0 / 3.0;
	float f_third = 1.0 / 3.0;
	
	printf("显示小数点后6位: %.6f\n",d_third);
	printf("显示小数点后12位: %.12f\n",d_third);
	printf("显示小数点后16位: %.16f\n",d_third);
	
	printf("显示小数点后6位: %.6f\n",f_third);
	printf("显示小数点后12位: %.12f\n",f_third);
	printf("显示小数点后16位: %.16f\n",f_third);
	
	printf("%d\n",FLT_DIG);
	printf("%d\n", DBL_DIG);
	 
	return 0; 
} 
