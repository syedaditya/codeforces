#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, cn = 0, m = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= arr[i - 1])
        {
            cn++;
            m = max(m, cn);
        }
        else
        {
            cn = 1;
        }
    }
    cout << m;

    return 0;
}