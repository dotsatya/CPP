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
};

class GarmanSap : public Animal , public Dog {
    public:
    void speak(){
        cout << "GarmanSap Sleeep";
    }
};

int main(){

    GarmanSap g1;
    g1.Animal::eat(); //scope resolution
    g1.Dog::eat();

    Animal a1;
    // a1.gs_eat();
}

