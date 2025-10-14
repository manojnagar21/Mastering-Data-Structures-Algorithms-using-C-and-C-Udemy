#include <stdio.h>
int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("%d\n", sizeof(ptr));
    
    char *chptr;
    chptr = (char *)malloc(5 * sizeof(char));
    printf("%d\n", sizeof(chptr));
}