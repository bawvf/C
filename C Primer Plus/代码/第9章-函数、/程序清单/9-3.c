#include <stdio.h>
int imin(int, int);

int main(void) {
    int evill1, evill2;

    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evill1, &evill2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n", evill1, evill2, imin(evill1, evill2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

int imin(int n, int m) {
    int min;

    if (n < m)
        min = n;
    else 
        min = m;
    
    return min;
}