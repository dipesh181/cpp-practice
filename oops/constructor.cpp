#include <iostream>
using namespace std;

class student {
public:
    int x;

    student(int a) {
        x = a;
    }

    void show() {
        cout << x;
    }
};

int main() {
    student s(4);
    s.show();
    return 0;
}
