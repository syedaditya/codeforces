#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int s,p,a;
    int mi = 0;
    cin>>s>>p;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+p,greater<int>());
    for (int i = 0; i < p; i++)
    {
        cout<<arr[i]<<" ";
    }
}