#include <stdio.h>
int main(void) {
	
	float megabits,mb,second;
	
	printf("请输入速度:");
	scanf("%f",&megabits);
	printf("请输入文件大小:");
	scanf("%f",&mb); 
	
	second = (mb*8) / megabits;
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",megabits,mb);
	printf("downloads in %.2f seconds.\n",second); 
	
	return 0; 
} 
