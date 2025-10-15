#include<iostream>
using namespace std;
int main(){
    int a, b,h;
    int count1 = 0;
    int count2 = 0;
    cin>>a>>b;
    if (a>b)
    {
        h = a;
    }
    else{
        h = b;
    }
    for (int i = 1; i <= h; i++)
    {
        if (a != 0 && b != 0)
        {
            a = a-1;
            b = b-1;
            count1++;
        }
        else if (a >= 2 && b == 0)
        {
            a = a - 2 ;
            count2++;
        }
        else if (a==0 && b >= 2)
        {
            b = b-2;
            count2++;
        }  
    }
    cout<<count1<<" "<<count2;
    

}