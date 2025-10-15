#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        for (int i = 2; i < 10e9; i++)
        {
            int p = pow(2,i)-1;
            if (a%p==0)
            {
                cout<<a/p<<endl;
                break;
            }
            
        }
        
    }
    
}