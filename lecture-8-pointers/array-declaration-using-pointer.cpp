#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int)); // created inside the heap memory
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    for(int i = 0; i < 5; i++) {
        

        cout << ptr[i] << endl;
    }
}