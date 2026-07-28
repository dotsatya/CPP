 #include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "Animals eat";
    }
};

class Dog : public Animal {
public:
    void eat() override {
        cout << "Dog eat";
    }
};

class cat : public Animal {
public:
    void eat() override {
        cout << "Cat eat";
    }
};  

int main() {

// // RUNTIME // DYNAMIC POLYMORPHISM 
  //1. heap object 
    // Animal* ptr;
    // ptr = new Animal();
    // ptr->eat();
    // delete ptr;

    // ptr = new Dog();
    // ptr->eat();
    // delete ptr;
    
    // ptr = new cat();
    // ptr->eat();
    // delete ptr;
    

  //2. stack object 
    Animal a;
    Dog d;
    cat c;

    Animal* ptr;

    ptr = &a;
    ptr->eat();  

    ptr = &d;
    ptr->eat();  

    ptr = &c;
    ptr->eat();   

// // STACK // COMPILE // STATIC POLYMORPHISM 
    cat c1;
    c1.eat();

    return 0;
}