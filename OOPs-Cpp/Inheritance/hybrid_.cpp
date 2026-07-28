#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animals eat" << endl;
    }
    void sleep()
    {
        cout << "Animals sleep" << endl;
    }
    void speak()
    {
        cout << "Animals speak" << endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Dog eat" << endl;
    }
    void speak()
    {
        cout << "Dog speak" << endl;
    }
};
class GermanShepherd : public Dog
{
public:
    void eat()
    {
        cout << "GSDog eat" << endl;
    }
};
class Cat : public Animal
{
public:
    void eat()
    {
        cout << "Cat eat" << endl;
    }
    void speak()
    {
        cout << "Cat speak" << endl;
    }
};
int main()
{
    GermanShepherd gs1;
    gs1.eat();
    gs1.speak();
    gs1.sleep();
    return 0;
}

