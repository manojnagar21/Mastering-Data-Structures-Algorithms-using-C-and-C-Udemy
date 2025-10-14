#include <iostream>
int main() {
    struct Student {
        int rollNo;
        char name[50];
        char department[10];
        char address[50];
    };
    struct Student s = {1, "Rohan", "IT", "Mumbai"};
    printf("Student details are Roll No %d Name %s Department %s Address %s", s.rollNo, s.name, s.department, s.address);
}