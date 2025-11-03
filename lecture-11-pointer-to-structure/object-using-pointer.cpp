#include <iostream>
#include <stdio.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle *ptr;
    ptr = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    ptr->length = 10;
    ptr->breadth = 15;
    cout << ptr->length << endl;
    cout << ptr->breadth << endl;
    return 0;  
}