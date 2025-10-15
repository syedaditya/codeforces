#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    int b;
    int sum = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    for (int i = 0; i < a - 1; i++)
    {
        b = arr[a - 1] - arr[i];
        if (b != 0)
        {
            sum = sum + b;
        }
    }
    cout << sum;
}