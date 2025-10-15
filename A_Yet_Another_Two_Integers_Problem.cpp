#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (abs(a - b) % 10 == 0)
            {
                cout << abs(a - b) / 10 << endl;
            }
            else
            {
                cout << (abs(a - b) / 10) + 1 << endl;
            }
        }
    }
}