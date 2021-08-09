#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check_anagram(string s1, string s2);

int main()
{
    string s1{""}, s2{""};
    cout << "Enter two strings" << endl;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    check_anagram(s1, s2);
    return 0;
}

void check_anagram(string s1, string s2)
{
    int a[26], i{0};
    for (i = 0; i < s1.length(); i++)
    {
        a[s1[i] - 65] += 1;
    }
    for (i = 0; i < s2.length(); i++)
    {
        a[s2[i] - 65] -= 1;
        if (a[s2[i] - 65] < 0)
        {
            cout << s1 << " And " << s2 << " are not ANAGRAMS" << endl;
            break;
        }
    }
    if (s2.length() == (i - 1))
    {
        cout << s1 << " And " << s2 << " are ANAGRAMS" << endl;
    }
}
