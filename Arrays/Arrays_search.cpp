#include <iostream>
using namespace std;
void Display(struct Array y);
int Linear_search(struct Array y, int n);
int Improved_linear(struct Array *y, int val);

struct Array
{
    int *a{nullptr};
    int size{0};
    int lenght{0};
};

int main()
{
    struct Array x;
    int s, n, i, val, result;
    cout << "Enter size of array you want to create" << endl;
    cin >> s;
    x.a = new int[s];
    cout << "Enter number of elements you want to enter" << endl;
    cin >> n;
    x.lenght = n;
    cout << "Enter " << x.lenght << " elements" << endl;
    for (int i = 0; i < x.lenght; i++)
    {
        cin >> x.a[i];
    }
    Display(x);
    cout << "Enter a number you want to search" << endl;
    cin >> n;
    val = Linear_search(x, n);
    if (val != -1)
    {
        cout << n << " Is present at Index " << val << endl;
    }
    else
    {
        cout << n << " Is not present in array" << endl;
    }
    cout << "----------Improoved Linear Search----------" << endl;
    cout << "How many numbers you want to search" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value to search" << endl;
        cin >> val;
        result = Improved_linear(&x, val);
        if (result != -1)
        {
            cout << val << " Is at Index " << result << endl;
        }
        else
        {
            cout << val << " Is not present in array" << endl;
        }
    }
    return 0;
}

void Display(struct Array y)
{
    cout << "Displaying array: ";
    for (int i = 0; i < y.lenght; i++)
    {
        cout << y.a[i] << " ";
    }
    cout << endl;
}

int Linear_search(struct Array y, int n)
{
    for (int i = 0; i < y.lenght; i++)
    {
        if (y.a[i] == n)
        {
            Display(y);
            return i;
        }
    }
    Display(y);
    return (-1);
}

int Improved_linear(struct Array *y, int val)
{
    for (int i = 0; y->lenght; i++)
    {
        if (val == y->a[i])
        {
            int temp = y->a[i];
            for (int j = i; j > 0; j--)
            {
                y->a[j] = y->a[j - 1];
            }
            y->a[0] = temp;
            Display(*y);
            return 0;
        }
    }
    return -1;
}
