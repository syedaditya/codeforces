#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int count = 0;
    getline(cin, s);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] != s[i + 1]) && (s[i] != '{' && s[i] != ',' && s[i] != '}' && s[i] != ' '))
        {
            count++;
        }
    }
    cout << count;
}