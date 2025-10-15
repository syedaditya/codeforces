#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l;
    l = s.length();
    s[0]= towupper(s[0]);
    cout << s[0];
    for (int i = 1; i < l; i++)
    {
        s[i] = towlower(s[i]);
        cout << s[i];
    }
}