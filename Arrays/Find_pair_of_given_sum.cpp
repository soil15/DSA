#include <iostream>
using namespace std;

int main()
{
    int size{0}, sum{0}, max{0}, min{0};
    int *arr{nullptr}, *hash{nullptr};
    cout << "Enter size of array" << endl;
    cin >> size;
    arr = new int[size];
    cout << "Now Enter " << size << " elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter sum" << endl;
    cin >> sum;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        else if (max < arr[i])
        {
            max = arr[i];
        }
    }
    hash = new int[max];
    for (int i = 0; i < size; i++)
    {
        if (hash[sum - arr[i]] == -1 && arr[i] <= sum)
        {
            cout << arr[i] << " + " << sum - arr[i] << " = " << sum << endl;
            hash[arr[i]] = -1;
        }
        else
        {
            hash[arr[i]] = -1;
        }
    }
    return 0;
}
