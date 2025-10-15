#include<iostream>
using namespace std;
int main(){
    int a, n;
    int next = 0;
    cin>>a;
    cin>>n;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i]>arr[n-1] && arr[i]>0)
        {
            next++;
        }
        
    }
    cout<<next;
    
    
}