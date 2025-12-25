#include <iostream>
#include <cstring>
using namespace std;

class Hero {
public:
    int health;
    char level;
    char *name;

    Hero() {
        cout << "Default Constructor called" << endl;
        name = new char[100];
    }

    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        // name = new char[100];
    }

    // Copy Constructor (Deep Copy)
    // Hero(Hero &temp) {
    //     // cout << "Copy constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;

    //     // this->name = new char[strlen(temp.name) + 1];
    //     // strcpy(this->name, temp.name);
    // }

    void print() {
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << ", ";
        cout << "Name: " << this->name <<endl<<endl;
    }

    // Getters
    int getHealth() { return health; }
    char getLevel() { return level; }

    // Setters
    void setHealth(int h) { health = h; }
    void setLevel(char l) { level = l; }
    void setName(char name[]) { strcpy(this->name, name); }

    // Destructor
    // ~Hero() {
    //     delete[] name;
    //     // cout << "Destructor called" << endl;
    // }
};

int main() {
    // Hero ssd(100, 'A');
    // ssd.setName("Ironman");
    // ssd.print();

    // // Copy constructor
    // Hero ssd2(ssd);
    // ssd2.print();

    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('A');
    char name[6] = "Iron";
    hero1.setName(name);
    hero1.print();  
    
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'D';
    hero1.print();
    hero2.print();

    return 0;
}
