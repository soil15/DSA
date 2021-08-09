#include <iostream>
using namespace std;

class Node
{
    int data{0};
    Node *next{nullptr};

public:
    void count(Node *first);
    int count_rec(Node *first);
    void create(int a[], int size);
};

void Node::create(int a[], int size)
{
    Node *first = new Node;
    Node *last{nullptr};
    first->data = a[0];
    last = first;
    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node;
        temp->data = a[0];
        last->next = temp;
        last = temp;
    }
    count(first);
    count_rec(first);
}

void Node::count(Node *first)
{
    int count{0};
    cout << "Iterative" << endl;
    while (first)
    {
        count += 1;
        first = first->next;
    }
    cout << count << endl;
}

int Node::count_rec(Node *first)
{
    if (first)
    {
        cout << (1 + count_rec(first->next));
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int size{0};
    Node obj;
    cout << "Enter size of array" << endl;
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    obj.create(a, size);
    return 0;
}