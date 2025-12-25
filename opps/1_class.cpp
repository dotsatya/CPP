#include<iostream>
using namespace std;

class Hero {
public:
  int health;
  char level;

public:
  // //getter
  // int getHealth() {
  //   return health;
  // }
  // //setter
  // void setHealth(int h) {
  //   health = h;
  // }

  ///constructor
  // Hero() {
  //   cout<<"Constructor called"<<endl;
  // }
  // parameterized
  Hero(int health) {
    this->health = health;
    cout<<"Parameterized constructor called"<<health<<endl;
  }
  Hero(int health, char level) {
    this->health = health;
    this->level = level;
  }
  void print() {
    cout<<"Health: "<<health<<endl;
    cout<<"Level: "<<level<<endl;
  }
};

int main() {
  // Hero ssd;
  // Hero *s = new Hero();

//   Hero ssd(100);
//   Hero *s = new Hero(100);
//  //print this pointer
//   cout<<s<<endl;
//   cout<<&s<<endl;
//   cout<<s->health<<endl;

  Hero ssd(100, 'A');
  ssd.print();
  //copy constructor
  Hero ssd2(ssd);
  ssd2.print();
  Hero ssd3 = ssd;
  ssd3.print();
  Hero *ssd4 = new Hero(ssd);
  ssd4->print();
  // ssd4.print();  

  // ssd.setHealth(100);

  // cout<<ssd.getHealth();

  // ssd.print();

  return 0;
}