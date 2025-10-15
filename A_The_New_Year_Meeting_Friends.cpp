#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n = 3;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3,greater<int>());
    for (int i = 0; i < 2; i++)
    {
        int min = arr[i]-arr[i+1];
        sum = sum + min; 
    }
    cout<<sum;
    
    

}