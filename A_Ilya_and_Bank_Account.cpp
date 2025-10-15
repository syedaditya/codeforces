#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 0)
    {
        cout << a << endl;
    }
    else
    {
        int n = a / 10;
        int b = ((a / 100) * 10) + (a % 10);
        int m = max(n, b);
        cout << m;
    }
}