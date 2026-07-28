#include <iostream>
using namespace std;

class A {
public:
    int x;

    // constructor
    A(int val) {
        x = val;
    }

    // operator overloading
    A operator + (A obj) {
        return A(x + obj.x);
    }
};

int main() {
    A a1(5), a2(10);
    A a3 = a1 + a2;

    cout << a3.x;
}