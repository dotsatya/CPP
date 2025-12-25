#include <iostream>
#include <stack>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Stack class
class Stack {
public:
    Node *top;  

    Stack() {
        top = NULL; 
    }

    void push(int data) {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element: " << top->data << endl;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void display() {
        Node *temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main() {
    // Stack *node1 = new Stack(10);
    

    // Example: creating a Stack object
// taking input from the user+
    Stack stack;
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the element: ";   
        cin>>data;
        stack.push(data);
        cout<<"Stack: ";        
        stack.display();
    }
    //pop from user
    int m;
    cout<<"Enter the number of elements you want to pop: ";
    cin>>m;
    for(int i=0;i<m;i++){
        stack.pop();
        cout<<"Stack: ";
        stack.display();
    }

    // Example: displaying the stack
    return 0;
}
