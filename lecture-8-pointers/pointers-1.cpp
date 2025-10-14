#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int a = 10;
    int *ptr;
    ptr = &a;
    cout << a << endl;
    printf("using pointer %d\n", *ptr);
    printf("%p %p\n", ptr, &a);
    return 0;
}