#include<stdio.h>

int main(void) {
	char ac[] = {0,1,2,3,4,5,6,7,8,9};
	char *p = &ac;
	char *p1 = &ac[5]; 
	
	printf("p  =%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*(p+1)=%p\n",*(p+1));
	printf("*(p1-1) =%p\n",*(p1-1)); 
	printf("p1-p=%d\n",p1-p); 
	printf("\n"); 
	
	int ai[] = {0,1,2,3,4,5,6,7,8,9};
	int *q = &ai;
	int *q1 = &ai[5]; 
	
	printf("p  =%p\n",q);
	printf("p+1=%p\n",q+1); 
	printf("*(q+1)=%p\n",*(q+1)); 
	printf("*(q1-1) =%p\n",*(q1-1)); 
	printf("q1-q=%d\n",q1-q); 
	printf("\n");
	
	int ai1[] = {0,1,2,3,4,5,6,7,8,9};
	int *r = ai1;
	int *r1 = ai1[5]; 
	
	printf("r  =%p\n",r);
	printf("r+1=%p\n",r+1); 
	printf("*(r+1)=%p\n",*(r+1)); 
	
	printf("r1-r=%d\n",r1-r);
	printf("*(r1-1) =%p\n",*(r1-1)); 
	return 0; 
} 
