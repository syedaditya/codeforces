#include <iostream>
using namespace std;
int wrongsub(int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n = n / 10;
        }
    }
    return n;
}
int main()
{
    int n, k, w;
    cin >> n;
    cin >> k;
    w = wrongsub(n, k);
    cout << w;
}