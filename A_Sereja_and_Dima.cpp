#include <iostream>
#include <utility>
using namespace std;
int main()
{
    long long int n;
    int j = 0;
    int p1 = 0;
    int p2 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i = i + 2)
    {
        p1 = p1 + arr[i];
        p2 = p2 + arr[i + 1];
    }
    cout << p1 << " " << p2;
}