#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
struct RectangleNew {
    int length;
    int breadth;
    char x; // 1 bytes
};
int main() {
    struct Rectangle r1 = {10, 5};
    struct RectangleNew r2 = {10, 5};
    printf("%d\n", sizeof(r1));
    printf("%lu\n", sizeof(r1)); // long unsigned
    printf("%d\n", sizeof(r2)); // adjusting memory
    printf("%lu\n", sizeof(r2));
}