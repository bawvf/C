#include <stdio.h>
int main(void) {
	float pintuo,anggsi,datangshao,chashao,bei;
//	int bei;
	
	printf("请输入有几杯水：");
	scanf("%f",&bei);
	
	pintuo = bei / 2;
	anggsi =  bei * 8;
	datangshao = anggsi * 2;
	chashao = datangshao * 3;
	
	printf("品脱：%.2f,盎司：%f,汤匙：%f,茶匙：%f",pintuo,anggsi,datangshao,chashao);
	
	return 0; 
} 
