#include <stdio.h>
#define MIN 60
int main(void) {
	
	int s, hour, mines; 
	
	printf("请输入一个分针数：");
		scanf("%d", &s);
	
	while(s > 0) {
	
		hour = s / MIN;
		mines = s % MIN;
		printf("%d分钟为%d小时%d分\n", s, hour, mines); 
		printf("输入小于或等于0结束"); 
		printf("请输入一个分针数：");
		scanf("%d", &s);
	} 
	
	return 0; 
} 
