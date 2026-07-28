#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Animals eat";
    }
};

class Dog {
    public:
    void eat(){
        cout << "Dog eat";
    }
    void speak(){
        cout << "Dog ghewww";
    }
};

class GarmanSap : public Animal , public Dog {
    public:
    void speak(){
        cout << "GarmanSap Sleeep";
    }

    // // inheritance_ambiguty
    // void gs_eat(){
    //     Dog::eat();
    // }
    
};

int main(){
    Dog d1;
    d1.speak();

    GarmanSap g1;
    g1.speak();
    // g1.gs_eat();

    // inheritance_ambiguty
    g1.Animal::eat(); //scope resolution
    g1.Dog::eat();

}

