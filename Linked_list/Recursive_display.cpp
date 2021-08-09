#include <iostream>
using namespace std;

class Node
{
    int data{0};
    Node *next{nullptr};

public:
    void create(int a[], int size);
    void recu_display(Node *pt);
};

void Node::recu_display(Node *pt)
{
    if (pt)
    {
        cout << " -> " << pt->data;
        recu_display(pt->next);
    }
}

void Node::create(int a[], int size)
{
    Node *last{nullptr};
    Node *first = new Node;
    first->data = a[0];
    last = first;
    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node;
        temp->data = a[i];
        last->next = temp;
        last = temp;
    }
    recu_display(first);
    cout << endl;
}

int main()
{
    Node obj;
    int size{0};
    cout << "Enter size of the array" << endl;
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    obj.create(a, size);
    return 0;
}
