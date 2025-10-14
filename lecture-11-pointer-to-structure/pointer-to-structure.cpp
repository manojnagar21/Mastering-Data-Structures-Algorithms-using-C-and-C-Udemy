#include <iostream>
#include <stdio.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r = {10, 5};
    struct Rectangle *ptr = &r;
    r.length = 15;
    r.breadth = 25;
    cout << r.length << endl << r.breadth << endl;


    (*ptr).length = 10;
    (*ptr).breadth = 5;
    cout << (*ptr).length << endl << (*ptr).breadth << endl;
    ptr->length = 25;
    ptr->breadth = 25;
    cout << ptr->length << endl << ptr->breadth << endl;
}