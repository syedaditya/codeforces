#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector <int>my;
        int a,count=0;
        cin >> a;
        if (a % 10 != 0)
        {
            my.push_back(a%10);

        }
        int m = a % 10;
        a = a - m;
        if (a % 100 != 0)
        {
            my.push_back(a%100);

        }
        m = a % 100;
        a = a - m;
        if (a % 1000 != 0)
        {
            my.push_back(a%1000);
          

        }
        m = a % 1000;
        a = a - m;
        if (a % 10000 != 0)
        {

            my.push_back(a%10000);            
        }
        if (a >= 10000 && a % 10000 == 0)
        {
            my.push_back(a);            
           
        }
        cout << my.size() << endl; 
        
        for (int i = 0; i < my.size(); i++)
        {
            cout<<my[i]<<" ";
        }
    }
}