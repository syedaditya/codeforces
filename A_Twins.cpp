#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0, sum2 = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    sum = sum / 2;
    sort(a, a + n);
    for (int j = n - 1; j >= 0; j--)
    {
        sum2 = sum2 + a[j];
        count++;
        if (sum < sum2)
        {
            break;
        }
    }
    cout<<count<<endl;
}