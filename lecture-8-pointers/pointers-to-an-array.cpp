#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int A[5] = {2, 4, 6, 8, 10};
    int *ptr;
    ptr = A; // by default reference to first element
    ptr = &A[0]; // reference to first element
    // ptr = &A; // invalid syntax
    for(int i = 0; i < 5; i++) {
        cout << A[i] << endl;
        cout << ptr[i] << endl;
    }
    return 0;
}