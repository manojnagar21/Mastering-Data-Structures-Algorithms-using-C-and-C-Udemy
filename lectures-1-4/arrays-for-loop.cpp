#include <iostream>
using namespace std;
int main() {
    cout << "Enter the size of array: ";
    int num;
    cin >> num;
    // int A[num]; // it cannot be initialized with values as it is variable sized array and it has all garbage values
    int A[5];
    A[0] = 2;
    for(int x: A) {
        cout << x << endl;
    }
}