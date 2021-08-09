#include <iostream>
using namespace std;

class Queue;
class Stack;

class Doubly_node
{
private:
    Doubly_node *prev{nullptr};
    int data{0};
    Doubly_node *next{nullptr};
    friend Queue;
};

class Node
{
private:
    Node *ptr{nullptr};
    int data{0};
    friend Stack;
};

class Queue
{
private:
    int size{0};
    Doubly_node *front{nullptr}, *rear{nullptr};

public:
    void create_queue();
    void display();
    void enqueue();
    int dequeue();
    bool is_empty();
};

void Queue::display()
{
    Doubly_node *p = front;
    do
    {
        cout << p->data << " -> ";
        p = p->next;
    } while (p != front);
}

void Queue::create_queue()
{
    int size{0};
    cout << "Enter size of queue" << endl;
    cin >> size;
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    Doubly_node *temp = new Doubly_node;
    temp->data = a[0];
    temp->prev = temp->next = temp;
    front = rear = temp;
    delete temp;
    for (int i = 1; i < size; i++)
    {
        Doubly_node *temp = new Doubly_node;
        temp->data = a[i];
        temp->next = front;
        temp->prev = rear;
        front = temp;
        delete temp;
    }
}

class Stack
{
private:
    int size{0};
    Node *first{nullptr};

public:
    void create_stack();
    void push(int val);
    int pop();
    void display();
    bool is_empty();
};

bool Stack::is_empty()
{
    if (first == nullptr)
        return true;
    else
        return false;
}

int Stack::pop()
{
    int x{0};
    Node *temp = first;
    first = temp->ptr;
    x = temp->data;
    delete temp;
    return x;
}

void Stack::push(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->ptr = first;
    first = temp;
    display();
}

void Stack::display()
{
    Node *temp = first;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->ptr;
    }
    cout << endl;
}

void Stack::create_stack()
{
    cout << "Enter size of stack" << endl;
    cin >> size;
    int *a = new int[size];
    cout << "Now enter " << size << " elements to initialise stack" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    Node *p = new Node;
    p->data = a[0];
    p->ptr = nullptr;
    first = p;
    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node;
        temp->data = a[i];
        temp->ptr = first;
        first = temp;
        delete temp;
    }
    display();
}

int main()
{
    int val{0};
    Stack obj;
    obj.create_stack();
    cout << "Enter value to push" << endl;
    cin >> val;
    obj.push(val);
    cout << "Enter no of values you want to pop" << endl;
    cin >> val;
    for (int i = 0; i < val; i++)
    {
        obj.pop();
    }
    cout << "After poping " << val << " elements" << endl;
    obj.display();
    cout << "Is stack empty : " << obj.is_empty() << endl;
    cout << "-----------------------------------------" << endl
         << "QUEUE" << endl;
    Queue object;
    object.create_queue();
    object.display();
    cout << "bc" << endl;
    return 0;
}
