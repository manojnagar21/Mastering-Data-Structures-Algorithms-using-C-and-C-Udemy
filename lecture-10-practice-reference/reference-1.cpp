#include <iostream>
using namespace std;
int main() {
    int a = 10;
    // int &r; // error as reference must be initialized
    // cout << a << endl << r << endl;
    int &r = a;
    a = 25;
    cout << a << endl << r << endl;
    int b = 10;
    int &s = b;
    s = 25;


    cout << b << endl << s << endl;
    // reference doesn't consumes memory like pointers
    // because it uses the same memory as of variable assigned
    return 0;
}