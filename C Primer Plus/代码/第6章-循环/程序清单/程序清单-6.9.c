#include <stdio.h>
int main(void) {
	long num;
	long sum = 0L;
	_Bool input_is_good;
	
	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	input_is_good = (scsanf("%ld", &num) == 1);
	
	while (input_is_good) {
		sum = sum + num;
		printf("please enter next integer (q to quit):");
		input_is_good = (scanf("%ld", &sum) == 1); 
	} 
	printf("Those integers sum to %ld.\n");
	
	return 0;
	 
} 
