#include <stdio.h>
#include <float.h>
int main(void) {
	
	double d_third = 1.0 / 3.0;
	float f_third = 1.0 / 3.0;
	
	printf("��ʾС�����6λ: %.6f\n",d_third);
	printf("��ʾС�����12λ: %.12f\n",d_third);
	printf("��ʾС�����16λ: %.16f\n",d_third);
	
	printf("��ʾС�����6λ: %.6f\n",f_third);
	printf("��ʾС�����12λ: %.12f\n",f_third);
	printf("��ʾС�����16λ: %.16f\n",f_third);
	
	printf("%d\n",FLT_DIG);
	printf("%d\n", DBL_DIG);
	 
	return 0; 
} 
