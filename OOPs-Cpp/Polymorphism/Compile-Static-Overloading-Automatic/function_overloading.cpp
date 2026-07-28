
// method overloading ->> in JAVA

#include <iostream>
using namespace std;

class A{
public:
    void show(int a){
        cout << "A show(int a)" << endl;
    }
    void show(int a, int b){
        cout << "A show(int a, int b)" << endl;
    }
    int show(bool a, int b){
        cout << "A show(bool a, int b)" << endl;
        return 0;
    }
    int show(int a, int b, int c){
        cout << "A show(int a, int b, int c)" << endl;
        return 0;
    }
    char show(int a, char b){
        cout << "A show(int a, char b)" << endl;
        return 0;
    }
};

int main(){
    A a1;
    a1.show(1, 2);
    a1.show(true, 2);
    a1.show(1, 2, 3);
    return 0;
}