#include <iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        if (a>b && b>c)
        {
            cout<<a;
        }
        else if(b>a && a>c)
        {
            cout<<b;
        }
        else if(a>b && c>a){
            cout<<c;
        }
    }
    
    
}
