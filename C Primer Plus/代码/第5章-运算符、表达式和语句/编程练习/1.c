#include <stdio.h>
#define MIN 60
int main(void) {
	
	int s, hour, mines; 
	
	printf("������һ����������");
		scanf("%d", &s);
	
	while(s > 0) {
	
		hour = s / MIN;
		mines = s % MIN;
		printf("%d����Ϊ%dСʱ%d��\n", s, hour, mines); 
		printf("����С�ڻ����0����"); 
		printf("������һ����������");
		scanf("%d", &s);
	} 
	
	return 0; 
} 
