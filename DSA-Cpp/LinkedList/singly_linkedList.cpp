#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  ~Node()
  {
    int value = this->data;
    // memory free
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "Memory is free for node with data " << value << endl;
  }
};

/////////////////////////////////////////

//////Insertion
// insert at head
void insertAtHead(Node *&head, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

// insert at tail
void insertAtTail(Node *&tail, int data)
{
  Node *temp = new Node(data);
  tail->next = temp;
  tail = temp;
}

// insert at middle or any position
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
  // insert at head or 1st position
  if (position == 1)
  {
    insertAtHead(head, data);
    return;
  }

  Node *temp = head;
  int count = 1;
  while (count < position - 1)
  {
    temp = temp->next;
    count++;
  }

  // insert at tail or last position
  if (temp->next == NULL)
  {
    insertAtTail(tail, data);
    return;
  }

  Node *nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

/////////////////////////////////////////////////

/////Deletion
void deleteNode(int position, Node *&head, Node *&tail)
{
  // delete first or head node
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;

    // if list becomes empty, update tail too
    if (head == NULL)
      tail = NULL;

    temp->next = NULL;
    delete temp;
  }
  else
  {
    // delete any middle node or last node
    Node *curr = head;
    Node *prev = NULL;
    int count = 1;
    while (count < position)
    {
      prev = curr;
      curr = curr->next;
      count++;
    }
    // if deleting the last node, update tail
    if (curr->next == NULL)
      tail = prev;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

///////////////////////////////////////

// print the linked list
void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node *node1 = new Node(10);
  cout << node1->data << endl;
  cout << node1->next << endl;

  Node *head = node1;
  Node *tail = node1;
  print(head);
  // printf("Head: %d\n", head->data);

  insertAtHead(head, 12);
  print(head);

  insertAtTail(tail, 15);
  print(head);

  insertAtPosition(head, tail, 5, 3);
  print(head);

  insertAtTail(tail, 20);
  print(head);

  cout << "Head: " << head->data << endl;
  cout << "Tail: " << tail->data << endl;

  deleteNode(3, head, tail);
  print(head);

  deleteNode(1, head, tail);
  print(head);

  deleteNode(3, head, tail);
  print(head);

  cout << "Head: " << head->data << endl;
  cout << "Tail: " << tail->data << endl;

  return 0;
}