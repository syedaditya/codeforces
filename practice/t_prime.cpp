#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 2; j < arr[i]-1; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count != 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
}