#include <stdio.h>
#include <stdio.h>
#include <string.h>

int statct_store = 40;
const char * pcg = "String Literal";
int main() {
    int auto_store = 40;
    char auto_string [] = "Auto char Array";
    int * pi;
    char * pcl;

    pi = (int *) malloc(sizeof(int));
    *pi = 35;
    pcl = (char *) malloc(strlen("Dynamic String") + 1);
    strcpy(pcl, "Dynamic String");

    printf("static_store: %d at %p\n", statct_store, &statct_store);
    printf("auto_store: %d at %p", auto_store, &auto_store);
    printf("    *pi: %d at %p\n", *pi, pi);
    printf("%s at %p\n", auto_string, auto_string);
    printf("%s at %p\n", pcl, pcl);
    printf("%s at %p\n", "Quoted String", "Quoted String");
    free(pi);
    free(pcl);

    return 0;
}