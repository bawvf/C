#include <stdio.h>
int main(void) {
	int count, sum, d;
	
	sum = 0;
	
	printf("������һ����ֵ��");
	scanf("%d", &count);
	
	d = count + 20; 
	while (count++ <= d) 
		sum = sum + count;
	printf("sum = %d\n", sum);
	
	return 0; 
} 
