#include<stdio.h>

int a[] = {1,2,3,4,5,6,7,8,9,10}; 

int search(int key, int a[], int len) {
	int ret = -1; 
	int left = 0;
	int right = len - 1;
	while(right > left) {
		int mid = (left + right) / 2;
		if(a[mid] == key) {
			ret = mid;
			break; 
		} else if(a[mid] > key) {
			right = mid - 1; 
		} else {
			left = mid + 1; 
		} 
	} 
	return ret; 
} 

int main() {
	int k = 9;
	int r = search(k,a,10);
	
	printf("%d\n",r); 
	
	return 0; 
} 
