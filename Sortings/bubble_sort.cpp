#include <iostream>
using namespace std;

class Node
{
private:
    int data{0};
    Node *ptr{nullptr};
    int size{0};

public:
    Node *first{nullptr}, *last{nullptr};
    void create_linked_list();
    void display();
};

void Node::display()
{
    Node *p = first;
    while (p->ptr != nullptr)
    {
        cout << p->data << " ";
        p = p->ptr;
    }
    cout << endl;
}

void Node::create_linked_list()
{
    cout << "Enter size of list" << endl;
    cin >> size;
    cout << "Enter " << size << " elements" << endl;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    first->data = a[0];
    last = first;
    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node;
        temp->data = a[i];
        last->ptr = temp;
        last = temp;
        delete temp;
    }
    delete[] a;
    display();
}

int main()
{
    Node obj;
    obj.create_linked_list();
    return 0;
}