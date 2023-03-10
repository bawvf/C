#include <stdio.h>
int li(int x);
int main(void) {
	int b,s;
	
	scanf("%d", &s); 
	b = li(s);
	printf("%d", b);
	
	return 0; 	
} 

int li(int x) {
	int d, sum = 0; 
	d = x + 20; 
	while (x++ <= d) 
		sum += x * x;
	return sum; 
} 
