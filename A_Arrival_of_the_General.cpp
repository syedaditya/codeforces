#include <iostream>
using namespace std;
int main()
{
    int n;
    int max = 0, min = 101, maxi, mini;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            mini = i;
        }
    }
    if (maxi > mini)
    {

        mini = mini + 1;
    }

    cout << endl
         << maxi + (n - 1) - mini;
    return 0;
}