#include<stdio.h>

struct date {
	int month;
	int day;
	int year; 
}; 

int main(int argc, char const *argv[]) {
	struct date today;
	
	today = (struct date){07,31,2022};
	
	struct date day;
	
	struct date *pDate = &today;
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("The day's date is %i-%i-%i.\n",
		day.year,day.month,day.day);
	
	printf("address of today is %p\n", pDate);
	
	return 0; 
} 
