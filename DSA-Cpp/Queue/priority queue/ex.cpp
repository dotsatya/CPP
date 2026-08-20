#include <iostream>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int> pq;

    // Insert elements
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Print highest priority element
    cout << "Top element: " << pq.top() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    // Remove the top element
    pq.pop();

    // Print new top element
    cout << "After pop, top element: " << pq.top() << endl;

    return 0;
}