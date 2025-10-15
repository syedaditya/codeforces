#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int count = 0;
    cin >> n >> m;
    while (1)
    {
        if (n <= m)
        {
            n = n * 3;
            m = m * 2;
            count++;
        }
        if (n > m)
        {
            break;
        }
    }
    cout << count << endl;
}