#include <stdio.h>
int main(void) {
    const char * mesq = "Don't be a fool!";
    const char * copy;

    copy = mesq;
    printf("%s\n", copy);
    printf("mesq = %s; &mesq = %p; value = %p\n", mesq, &mesq, mesq);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
}