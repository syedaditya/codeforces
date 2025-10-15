#include <iostream>
using namespace std;
int main()
{
    int n, m, p;
    int sum = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        if (p > m)
        {
            sum = sum + 2;
        }
        else
        {
            sum = sum + 1;
        }
    }
    cout << sum << endl;
}