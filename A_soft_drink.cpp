#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t_l = c*d;
    int t_d = k*l;
    int x = t_d/(n*nl);
    int y = t_l/n;
    int z = p/(n*np);
    int res = min(x,min(y,z));
    cout<<res;
    return 0;
    
}