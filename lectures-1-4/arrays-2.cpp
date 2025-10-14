#include <iostream>
using namespace std;
int main() {
    int A[] = {2, 4, 6, 8, 10, 12, 14};
    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);


    cout << A[8] << endl; // garbage value
    printf("%d\n", A[9]); // garbage value



    int B[10] = {0}; // all elements set to zeros
    cout << B[0] << endl; // prints zero
    printf("%d\n", B[1]); // prints zero

    for(int x: A) {
        cout << x << endl;
    }
    return 0;
}