#include <iostream>
using namespace std;
void create(int a[], int size);
void display();

struct node
{
    int data{0};
    struct node *next{nullptr};
} * first{nullptr};

int main()
{
    int size{0}, *ptr{nullptr};
    cout << "Enter size of array" << endl;
    cin >> size;
    cout << "Enter " << size << " elements" << endl;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    create(ptr, size);
    display();
    return 0;
}

void create(int a[], int size)
{
    cout << "CREATE" << endl;
    struct node *last{nullptr}, *temp{nullptr};
    first = new node;
    first->data = a[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < size; i++)
    {
        temp = new node;
        temp->data = a[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    cout << "DISPLAY" << endl;
    struct node *pt{nullptr};
    pt = first;
    while (pt)
    {
        cout << pt->data << endl;
        pt = pt->next;
    }
}
