#include<iostream>
using namespace std;
int main(){
    int a,b,j,k;
    int m = 0, n = 0;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {

        if (arr[i]%2 == 0)
        {
            m++;
            j = i;
        }
        if (arr[i]%2 != 0)
        {
            n++;
            k = i;
        }
        
    }
    if (m==1)
    {
        cout<<j+1;
    }
    else{
        cout<<k+1;
    }
    
    
    
}