#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout << "Animals eat";
    }
    void speak(){
        cout << "Animal ghewww";
    }
    
};

class Dog : public Animal{
    public:
    // void speak(){
    //     cout << "Dog ghewww";
    // }
    void dogeat(){
        eat();
    }
    void eat(){
        cout << "Dog eat";
    }
};
int main(){
    // Dog *d1 = new Dog();
    // d1->dogeat();
    // delete d1;

    Dog d2;
    // d2.dogeat();
    d2.Animal::eat();
    d2.speak();

    // Animal anml;
    // anml.eat();
}