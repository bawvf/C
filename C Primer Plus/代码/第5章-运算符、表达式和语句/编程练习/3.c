#include <stdio.h>
#define WEEK 7
int main(void) {
	
	int s, week, day; 
	
	printf("������һ��������");
		scanf("%d", &s);
	
	while(s > 0) {
	
		week = s / WEEK;
		day = s % WEEK;
		printf("%d��Ϊ%d��%d��\n", s, week, day); 
		printf("����С�ڻ����0����"); 
		printf("������һ��������");
		scanf("%d", &s);
	} 
	
	return 0; 
} 
