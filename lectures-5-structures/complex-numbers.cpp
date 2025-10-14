#include <iostream>
int main() {
    struct Complex {
        int real;
        int imaginary;
    };
    struct Complex c = {3, 2};
    printf("Complex number is %d + (%d)i", c.real, c.imaginary);
    return 0;
}