#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Animals eat";
    }
    void sleep(){
        cout << "Animals sleep";
    }
};

class Dog : public Animal{
    public:
       void eat(){
        cout << "Dog eat";
    }
       void speak(){
        cout << "Dog speak";
    }
};

class GarmanSefard : public Dog{
       public:
       void eat(){
        cout << "GSDog eat";
    }
};

int main (){
    GarmanSefard g1;
    g1.eat();

    //inheritance_ambiguty
    g1.Dog::eat(); //scope resolution
    g1.Animal::eat();
    g1.GarmanSefard::eat();
}