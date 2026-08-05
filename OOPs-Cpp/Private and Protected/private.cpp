class Animal {
private:
    int age = 5;
};

class Dog : public Animal {
public:
    void show() {
        cout << age;   // ❌ Error
    }
};