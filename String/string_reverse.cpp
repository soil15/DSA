#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string" << endl;
    cin >> s;
    for (int i = 0; i < (s.length()) / 2; i++)
    {
        char temp;
        temp = s[i];
        s[i] = s[s.length() - (i + 1)];
        s[s.length() - (i + 1)] = temp;
    }
    cout << s << endl;
    return 0;
}
