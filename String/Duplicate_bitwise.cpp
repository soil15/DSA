#include <iostream>
using namespace std;

int main()
{
    string s{""};
    int h{0}, x{0};
    cout << "Enter a string in small letters plzz" << endl;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        x = 1;
        x = x << (s[i] - 97);
        if ((h & x) > 0)
        {
            cout << s[i] << " Is duplicate letter in " << s << endl;
        }
        else
        {
            h = h | x;
        }
    }
    return 0;
}
