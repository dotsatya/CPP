#include <iostream>
using namespace std;

// Node class
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//Queue class
class Queue{
    Node *front;
    Node *rear;
public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int data){
        Node *temp = new Node(data);
        if(front == NULL){
            front = temp;
            rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    int dequeue(){
        if(front == NULL){
            return -1;
        }
        int ans = front->data;
        Node *temp = front;
        front = front->next;
        delete temp;
        return ans;
    }
    bool isEmpty(){
        return front == NULL;
    }
    int getFront(){
        if(front == NULL){
            return -1;
        }
        return front->data;
    }
};