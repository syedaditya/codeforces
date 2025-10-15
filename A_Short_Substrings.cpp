#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string s;
        cin>>s;
        for (int i = 0; i < s.size()-1; i=i+2)
        {
          cout<<s[i];
        } 
        cout<<s[s.size()-1]<<endl;   
    }
    return 0;
}