#include <stdio.h>
int main(void) {
	
	float megabits,mb,second;
	
	printf("�������ٶ�:");
	scanf("%f",&megabits);
	printf("�������ļ���С:");
	scanf("%f",&mb); 
	
	second = (mb*8) / megabits;
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",megabits,mb);
	printf("downloads in %.2f seconds.\n",second); 
	
	return 0; 
} 
