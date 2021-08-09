#include <iostream>
using namespace std;
void Display(struct Array ar);
void Append(struct Array *ar, int val);
void Insert(struct Array *ar, int i, int val);
void Delete(struct Array *ar, int in);

struct Array
{
    int *a{nullptr};
    int size{0};
    int length{0};
};

int main()
{
    struct Array arr;
    int n, index;
    cout << "Enter the size of the array" << endl;
    cin >> arr.size;
    arr.a = new int[arr.size];
    cout << "Enter count of elements you want to enter" << endl;
    cin >> arr.length;
    cout << "Enter " << arr.length << " elements" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.a[i];
    }
    Display(arr);
    cout << endl;
    cout << "Enter a value to append in array" << endl;
    cin >> n;
    Append(&arr, n);
    Display(arr);
    cout << endl
         << "Enter index and value " << endl;
    cin >> index >> n;
    Insert(&arr, index, n);
    Display(arr);
    cout << "Enter index of element you want to delete" << endl;
    cin >> index;
    Delete(&arr, index);
    Display(arr);
    delete[] arr.a;
    return 0;
}

void Display(struct Array ar)
{
    cout << "Displaying an array" << endl;
    for (int i = 0; i < ar.length; i++)
    {
        cout << ar.a[i] << " ";
    }
    cout << endl;
}

void Append(struct Array *ar, int val)
{
    ar->a[ar->length] = val;
    ar->length += 1;
}

void Insert(struct Array *ar, int i, int val)
{
    if (i > ar->length)
    {
        cout << "Invalid index" << endl;
    }
    else
    {
        for (int j = ar->length; j > i; j--)
        {
            ar->a[j] = ar->a[j - 1];
        }
        ar->a[i] = val;
        ar->length += 1;
    }
}

void Delete(struct Array *ar, int in)
{
    if (in > ar->length && in < 0)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        for (int i = in; i < ar->length - 1; i++)
        {
            ar->a[i] = ar->a[i + 1];
        }
        ar->length -= 1;
    }
}
