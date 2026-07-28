#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }

  // destructor
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

//getLength
int getLength(Node *head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  return len;
}

/////////////////////////////////////////

//////Insertion
// insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  if (head != NULL)
    head->prev = temp;
  head = temp;
  if (tail == NULL)
    tail = head;
}

// insert at tail
void insertAtTail(Node *&tail, Node *&head, int data)
{
  Node *temp = new Node(data);
  if (tail == NULL)
  {
    head = temp;
    tail = temp;
    return;
  }
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

// insert at middle or any position
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
  // insert at head or 1st position
  if (position == 1)
  {
    insertAtHead(head, tail, data);
    return;
  }

  Node *temp = head;
  int count = 1;
  while (count < position - 1 && temp != NULL)
  {
    temp = temp->next;
    count++;
  }

  // insert at tail or last position
  if (temp == NULL || temp->next == NULL)
  {
    insertAtTail(tail, head, data);
    return;
  }

  Node *nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  nodeToInsert->prev = temp;
  temp->next->prev = nodeToInsert;
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
    if (head != NULL)
      head->prev = NULL;
    else
      tail = NULL;
    temp->next = NULL;
    delete temp;
  }
  else
  {
    Node *curr = head;
    int count = 1;
    while (count < position && curr != NULL)
    {
      curr = curr->next;
      count++;
    }
    if (curr == NULL)
      return;
    if (curr->next == NULL)
      tail = curr->prev;
    if (curr->prev != NULL)
      curr->prev->next = curr->next;
    if (curr->next != NULL)
      curr->next->prev = curr->prev;
    curr->next = NULL;
    curr->prev = NULL;
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

  insertAtHead(head, tail, 12);
  print(head);

  insertAtTail(tail, head, 15);
  print(head);

  insertAtPosition(head, tail, 5, 3);
  print(head);

  insertAtTail(tail, head, 20);
  print(head);

  cout << "Head: " << head->data << endl;
  cout << "Tail: " << tail->data << endl;

  deleteNode(3, head, tail);
  print(head);

  deleteNode(1, head, tail);
  print(head);

  deleteNode(3, head, tail);
  print(head);

  if (head)
    cout << "Head: " << head->data << endl;
  if (tail)
    cout << "Tail: " << tail->data << endl;

  return 0;
}