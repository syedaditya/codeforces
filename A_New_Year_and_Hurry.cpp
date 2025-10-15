#include<iostream>
using namespace std;
int main(){
    int n,m,s = 0, sum = 0,a;
    int count=0;
    cin>>n>>m;
    s = 240 - m;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 5*i;
      if (sum <= s)
      {
        count++;
      }
       
    }
    cout<<count;


}