#include<iostream>
using namespace std;
int main(){
    int a,m,c;
    int res=0;
    cin>>a;
    while (a--)
    {
        cin>>m>>c;
        if (m>c)
        {
            res++;
        }
        else if (m<c)
        {
            res--;
        }
        
    }
    
    if (res>0)
    {
        cout<<"Mishka";
    }
    else if (res<0)
    {
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";

    }
    
    
}