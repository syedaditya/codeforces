#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int f, p, q;
    int a[200];
    int temp;
    int count = 0;
    cin >> f >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> a[i];
    }
    sort(a, a + (p + q));
    for (int i = 0; i < p + q; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
    }
    if (count == f)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}