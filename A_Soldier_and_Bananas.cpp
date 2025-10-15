#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    int lend;
    int sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum = sum + i * k;
    }
    lend = sum - n;
    if (lend <= 0)
    {
        cout<< "0";
    }
    else
    {
        cout << lend << endl;
    }
}