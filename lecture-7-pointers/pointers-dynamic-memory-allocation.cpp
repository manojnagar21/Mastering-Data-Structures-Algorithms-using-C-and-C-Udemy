#include <iostream>
int main() {
    int *ptr;
    ptr = new int[5];
    printf("%d\n", sizeof(ptr));
    
    char *chptr;
    chptr = new char[5];
    printf("%d\n", sizeof(chptr));
}