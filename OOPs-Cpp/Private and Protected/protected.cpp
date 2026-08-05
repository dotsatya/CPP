#include <iostream>
using namespace std;

class Animal {
protected:
    int age = 5;
};

class Dog : public Animal {
public:
    void showAge() {
        cout << age << endl;   // ✅ Allowed
    }
};

int main() {
    Dog d;
    d.showAge();

    // cout << d.age;   // ❌ Error
}