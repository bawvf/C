#include <stdio.h>
 
int main(void) {
	int count, sum, d, b;
	
	sum = 0;
	
	printf("请输入一个数值：");
	scanf("%d", &count);
	
	d = count + 20; 
	while (count++ <= d) 
		sum += count * count;
	printf("sum = %d\n", sum);
	

	return 0; 
} 
