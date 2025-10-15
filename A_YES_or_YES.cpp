#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.length() > 3 || s.length() < 3)
        {
            break;
        }

        for (int i = 0; i < 3; i++)
        {
            s[i] = toupper(s[i]);
        }
        if (s == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
}