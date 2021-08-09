#include <iostream>
using namespace std;

int main()
{
    string s{""};
    bool flag{true};
    cout << "Enter a string" << endl;
    cin >> s;
    for (int i = 0; i < (s.length() / 2); i++)
    {
        if (s[i] != s[s.length() - (1 + i)])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "Its not palindrome" << endl;
    }
    return 0;
}
