#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, sum=0;
        cin>>n;
        long long a[n];
        for (long long i=0; i<n; i++){
            cin>>a[i];
            sum =sum + a[i];
        }
        cout<<abs(sum)<<"\n";
    }
}