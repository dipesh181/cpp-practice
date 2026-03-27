#include <iostream>
using namespace std;

class Student {
public:
    int x;

    // Normal constructor
    Student(int a) {
        x = a;
    }

    // Copy constructor
    Student(const Student &s) {
        x = s.x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Student s1(10);   // original object
    Student s2 = s1;  // copy constructor called

    s2.show();

    return 0;
}
