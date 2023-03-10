#include <stdio.h>
#define WEEK 7
int main(void) {
	
	int s, week, day; 
	
	printf("请输入一个天数：");
		scanf("%d", &s);
	
	while(s > 0) {
	
		week = s / WEEK;
		day = s % WEEK;
		printf("%d天为%d周%d天\n", s, week, day); 
		printf("输入小于或等于0结束"); 
		printf("请输入一个天数：");
		scanf("%d", &s);
	} 
	
	return 0; 
} 
