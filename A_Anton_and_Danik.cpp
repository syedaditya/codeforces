#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int count2 = 0;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        if (s[i] == 'D')
        {
            count2++;
        }
    }
    if (count > count2)
    {
        cout << "Anton";
    }
    else if (count < count2)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}