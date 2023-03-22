#include <stdio.h>
int main(void) {
    unsigned long num;
    unsigned long div;
    int isPrime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = 1; (div * div) <= num; div++) {
            if (num % div == 0) {
                if ((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n",
                    num, div, num / div);
                else 
                    printf("%lu is divisible by %lu,\n",
                    num, div);
                isPrime = 0;
            }
        }
        if (isPrime)
            printf("%lu is prime.\n");
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}