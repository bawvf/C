#include <stdio.h>
#define JL 3.785
#define KM 1.609 
int main(void) {
	
	float m,l,k,s;
	 
	printf("请输入旅行的里程:");
	scanf("%f",&m);
	printf("请输入消耗的汽油量:");
	scanf("%f",&l); 
	
	k = m * KM * 1.0;
	s = l * JL * 1.0;
	
	printf("%.1f升/公里",k / s);
	printf("USA:%.1f", k / s);
	printf("Europe:%.1f", s / k); 
	
	return 0;  
} 
