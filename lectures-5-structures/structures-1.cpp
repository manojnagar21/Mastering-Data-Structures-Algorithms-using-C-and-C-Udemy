#include <iostream>
using namespace std;
int main() {
    struct Rectangle {
        int length;
        int breadth;
    };
    struct Rectangle r = {10, 5};
    r.length = 15;
    r.breadth = 10;
    printf("Area of rectangle is %d", r.length * r.breadth);
}