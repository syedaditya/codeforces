#include <iostream>
using namespace std;
int main()
{
    int n, count1 = 0, count2 = 0, count3 = 0, count4 = 0, m = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            count1++;
        }
        if (arr[i] == 2)
        {
            count2++;
        }
        if (arr[i] == 3)
        {
            count3++;
        }
        if (arr[i] == 4)
        {
            count4++;
        }
    }
    m = count4;
    while(count1 != 0 && count3 != 0)
    {
        count3 = count3 - 1;
        count1 = count1 - 1;
        m = m + 1;
    }
    if (count1 == 0 && count3 != 0)
    {
        m = m + count3;
        count3 = 0;
    }
    m = m + (count2 / 2);
    if (count2 % 2 != 0)
    {

        if (count1 <= 2)
        {
            m = m + 1;
            count1 = 0;
            count2 = 0;
        }
        else
        {
            count1 = count1 - 2;
            m = m + 1;
            count2 = 0;
        }
    }

    if (count1 != 0)
    {
        m = m + count1 / 4;
        if (count1 % 4 != 0)
        {
            m = m+1;
        }
        
    }
    cout<<m;
}