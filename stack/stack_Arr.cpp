#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;      // pointer to array
    int capacity;  // maximum size of stack
    int top;       // index of top element

public:
    // Constructor
    Stack(int size) {
        capacity = size;
        arr = new int[capacity]; // dynamic array allocation
        top = -1;                // stack is initially empty
    }

    // Destructor
    ~Stack() {
        delete[] arr; // free allocated memory
    }

    // Push operation
    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed to stack\n";
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop\n";
            return;
        }
        cout << arr[top] << " popped from stack\n";
        top--;
    }

    // Peek / Top operation
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    Stack s(5); // stack of capacity 5

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Top element after popping: " << s.peek() << endl;

    if (s.isEmpty())
        cout << "Stack is empty now\n";
    else
        cout << "Stack still has elements\n";

    return 0;
}
