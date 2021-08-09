#include <iostream>
using namespace std;

int main()
{
    int size{0}, max{0}, min{0};
    int *arr{nullptr}, *hash{nullptr};
    cout << "Enter size of array" << endl;
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    hash = new int[max + 1]{0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }
    for (int i = 0; i < max; i++)
    {
        if (hash[i] == 0 && i > min)
        {
            cout << i << endl;
        }
        if (hash[i] > 1 && i > min)
        {
            cout << i << " times : " << hash[i] << endl;
        }
    }
    delete[] hash;
    delete[] arr;
    return 0;
}
