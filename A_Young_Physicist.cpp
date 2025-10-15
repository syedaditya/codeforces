#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        sum1 += a[i][0];
        sum2 += a[i][1];
        sum3 += a[i][2];
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}