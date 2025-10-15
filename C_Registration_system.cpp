#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    map<string, int> name;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (name[s] == 0)
        {
            name[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << s << name[s] << endl;
            name[s]++;
        }
    }

    return 0;
}