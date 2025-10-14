// different ways of declaring structures
#include <stdio.h>
#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
} r3, r4; // global to the code - option 1
struct Rectangle r5, r6; // global to the code - option 2
struct Rectangle r2; // global to the code - option 3
int main() {
    struct Rectangle r1; // variable local to main function - option 4
}