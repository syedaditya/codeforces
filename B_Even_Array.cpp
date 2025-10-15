#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int odd = 0;
        int even = 0;
        int match = 0;
        for (int i = 0; i < a; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] % 2 == 0)
                {
                    match++;
                }
                else
                {
                    even++;
                }
            }
            else
            {
                if (arr[i] % 2 != 0)
                {
                    match++;
                }
                else
                {
                    odd++;
                }
            }
        }
        if (match == a)
        {
            cout<<"0"<<endl;
        }
        else if (even == odd)
        {
            cout<<even<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        
        
    }
}