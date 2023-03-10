#include <stdio.h>
int main(void) {
	int s, a;
	
	printf("输入一个整数：");
	scanf("%d", &s);
	a = s + 11; 
	while(s < a) {
		printf("%4d", s);
		s++; 
	} 
	
	return 0; 
}
