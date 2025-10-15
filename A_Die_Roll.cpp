#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c = max(a,b);
     c = 6 - c;
    c++;
    int d = 6;
    if (c==6)
    {
        c = c/6;
        d = d/6;
    }
    else if (c==4)
    {
        c = c/2;
        d = d/2;
    }
    else if (c==3)
    {
        c = c/3;
        d = d/3;
    }
    else if (c==2)
    {
        c = c/2;
        d = d/2;
    }
    cout<<c<<"/"<<d;
    


}