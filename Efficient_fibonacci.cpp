#include <iostream>
using namespace std;
int Fibo(int a);

int f[10]{-1};

int main()
{
    int val{0}, ans{0};
    cout << "Enter value...." << endl;
    cin >> val;
    ans = Fibo(val);
    cout << "value at " << val << " is " << ans;
    return 0;
}

int Fibo(int a)
{
    if (a <= 1)
    {
        f[a] = a;
        return a;
    }
    else if (f[a - 2] == -1)
    {
        f[a - 2] = Fibo(a - 2);
        return f[a - 2];
    }
    else if (f[a - 1] == -1)
    {
        f[a - 1] = Fibo(a - 1);
        return f[a - 1];
    }
    else
    {
        return Fibo(a - 2) + Fibo(a - 1);
    }
}
