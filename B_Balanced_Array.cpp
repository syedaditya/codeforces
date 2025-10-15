#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int a;
        int sum1 = 0;
        int sum2 = 0;
        int s = 0;
        cin >> a;
        vector<int> num;
        if (a % 2 == 0)
        {
            if (a % 4 == 0)
            {

                num.push_back(2);
                for (int i = 1; i <= a; i++)
                {
                    if (i % 2 == 0)
                    {
                        num.push_back(i);
                        sum1 = sum1 + i;
                    }
                }
                for (int i = 1; i <= a; i++)
                {
                    if (i % 2 != 0)
                    {
                        num.push_back(i);
                        sum2 = sum2 + i;
                    }
                }
                s = sum1 - sum2;
                int c = num.back();
                num.back() = c + s;
                cout<<"YES"<<endl;
                for (int i = 1; i <= a; i++)
                {
                    cout << num[i] << " ";
                }
                cout<<endl;
                
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
