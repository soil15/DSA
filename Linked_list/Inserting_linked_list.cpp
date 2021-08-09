#include <iostream>
using namespace std;

class Node
{
    int data{0};
    Node *ptr{nullptr};

public:
    Node *first{nullptr};
    void create(int a[], int size);
    void insert(int val, int pos);
    void display(Node *pt);
};

void Node::create(int a[], int size)
{
    first = new Node;
    Node *last{nullptr};
    first->data = a[0];
    last = first;
    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node;
        temp->data = a[i];
        last->ptr = temp;
        last = temp;
    }
}

void Node::insert(int val, int pos)
{
    if (pos == 0)
    {
        Node *temp = new Node;
        temp->data = val;
        temp->ptr = first;
        first = temp;
    }
    else if (pos > 0)
    {
        Node *p{first}, *q{nullptr};
        Node *temp = new Node;
        temp->data = val;
        for (int i = 1; i <= 1; i++)
        {
            q = p;
            p = p->ptr;
        }
        if (p)
        {
            temp->ptr = q->ptr;
            q->ptr = temp;
        }
        else
        {
            cout << "Size of linked list exceeded" << endl;
        }
    }
}

void Node::display(Node *pt)
{
    if (pt)
    {
        cout << pt->data << " -> ";
        display(pt->ptr);
    }
}

int main()
{
    Node obj;
    int size{0}, val{0}, pos{0};
    cout << "Enter size of linked list" << endl;
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    obj.create(a, size);
    obj.display(obj.first);
    cout << endl;
    cout << "Enter a value and position to insert in linked list" << endl;
    cin >> val >> pos;
    obj.insert(val, pos);
    obj.display(obj.first);
    cout << endl;
    return 0;
}
