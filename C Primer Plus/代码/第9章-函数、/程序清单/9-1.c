#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolils, CA 94904"
#define WTDTH 40

void starbar(void);

int main(void) {
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

void starbar(void) {
    int count;

    for (count = 0; count < WTDTH; count++)
        putchar('*');
    putchar('\n');
    
}