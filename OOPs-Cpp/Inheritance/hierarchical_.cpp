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

class Cat : public Animal{
       public:
       void eat(){
        cout << "Cat eat";
    }
};

int main (){
    Dog g1;
    g1.eat();
    Cat c1;
    c1.eat();
}
