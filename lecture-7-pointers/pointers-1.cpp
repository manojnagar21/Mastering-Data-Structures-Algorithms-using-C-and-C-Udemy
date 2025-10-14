#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%p\n", *p);
}