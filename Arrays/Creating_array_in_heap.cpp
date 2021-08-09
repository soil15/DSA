#include <iostream>
using namespace std;

int main()
{
    int *p1{nullptr};
    int n{0}, m{0};
    cout << "Enter two dimensions of array" << endl;
    cin >> n >> m;
    p1 = new int[n][m];
    cout << "Enter " << n * m << " elements to initiaise the array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> p1[n][m];
        }
    }
    cout << "Displaying the array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << p1[n][m] << " ";
        }
        cout << endl;
    }
    return 0;
}
