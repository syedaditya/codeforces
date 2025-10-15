#include<iostream>
using namespace std;
int main()
{
    long long int n,k,a;
    cin>>n;
    cin>>k;
    if (n%2==0)
    {
        a = n/2;
    }
    else{
        a = (n+1)/2;
    }
    if (a>=k)
    {
        cout<<(k*2)-1;
    }
    else{
        cout<<(k-a)*2;
    }
    return 0;
}


