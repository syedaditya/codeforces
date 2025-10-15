#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 4;
    int s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n-1 ; i++)
    {
        s = arr[0] - arr[i + 1];
        cout << s <<" ";
    }
    return 0;
}