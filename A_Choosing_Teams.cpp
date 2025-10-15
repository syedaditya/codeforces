#include<iostream>
using namespace std;
int main(){
    int n,p;
    int count = 0;
    cin>>n>>p;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]< 5)
        {
            if (5-arr[i]>=p)
            {
                count++;
            }
            
        }
        
    }
    if (count>=3)
    {
        cout<<count/3;
    }
    else{
        cout<<0;
    }
    
    
    
}