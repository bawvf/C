#include <stdio.h>
int main(void) {
	int s, a;
	
	printf("����һ��������");
	scanf("%d", &s);
	a = s + 11; 
	while(s < a) {
		printf("%4d", s);
		s++; 
	} 
	
	return 0; 
}
