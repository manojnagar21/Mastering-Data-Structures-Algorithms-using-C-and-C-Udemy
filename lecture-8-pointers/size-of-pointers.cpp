#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    int *int_ptr;
    char *char_ptr;
    float *float_ptr;
    double *double_ptr;
    struct Rectangle *ptr;
    cout << sizeof(int_ptr) << endl;
    cout << sizeof(char_ptr) << endl;
    cout << sizeof(float_ptr) << endl;
    cout << sizeof(double_ptr) << endl;
    cout << sizeof(ptr) << endl;
    return 0;
}
// size of pointer is independent of its data type in latest compilers with 64 bit machine