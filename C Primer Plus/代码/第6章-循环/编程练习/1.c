#include <stdio.h>
int main(viud) {
	char a[26];
	int i, b = 97; 
	
	for (i = 1; i <= 26; i++) {
		a[i] = b;
		b++; 
	} 
	for (i = 1; i <= 26; i++) {
		printf("%c", a[i]); 
	} 
	
	return 0; 
} 
