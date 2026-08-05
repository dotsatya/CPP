#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        engineStart();   // Hidden implementation
        cout << "Car Started" << endl;
    }

private:
    void engineStart() {
        cout << "Engine is starting..." << endl;
    }
};

int main() {
    Car c;
    c.start();
}