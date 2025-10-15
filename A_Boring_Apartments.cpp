#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b = a % 10;
        int count = 0;
        while (a > 0)
        {
            a = a / 10;
            count++;
        }
        if (count == 1)
        {
            cout << ((b * 10) - 10) + 1 << endl;
        }
        else if (count == 2)
        {
            cout << ((b * 10) - 10) + 3 << endl;
        }
        else if (count == 3)
        {
            cout << ((b * 10) - 10) + 6 << endl;
        }
        else if (count == 4)
        {
            cout << ((b * 10) - 10) + 10 << endl;
        }
    }
}