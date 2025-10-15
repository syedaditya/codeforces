#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool is = true;
        for (int j = n - 1; j > 0; j--)
        {
            if (arr[j] - arr[j - 1] > 1)
            {
                is = false;
                break;
            }
        }
        if (is == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}