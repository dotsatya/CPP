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



/* 
You have a TV with a remote.

You press:

Power ON
Volume +
Volume -

Do you know how the TV turns on internally?

No.

You only know what to press.

This is Abstraction.

Abstraction = Hiding HOW something works.

Now think about the TV's internal parts

Inside the TV there are:

Circuit board
Wires
Chips
Memory

Can you directly change them?

No.

The TV protects them.

This is Encapsulation.

Encapsulation = Protecting data from direct access.
*/