#include <stdio.h>
int main(void) {
	float pintuo,anggsi,datangshao,chashao,bei;
//	int bei;
	
	printf("�������м���ˮ��");
	scanf("%f",&bei);
	
	pintuo = bei / 2;
	anggsi =  bei * 8;
	datangshao = anggsi * 2;
	chashao = datangshao * 3;
	
	printf("Ʒ�ѣ�%.2f,��˾��%f,���ף�%f,��ף�%f",pintuo,anggsi,datangshao,chashao);
	
	return 0; 
} 
