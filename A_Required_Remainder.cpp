#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int p = (z-y)/x;
        int k = (p*x)+y;
        cout<<k<<endl;
    }
    
}