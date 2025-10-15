#include <iostream>
using namespace std;
int main()
{
    string a;
    int s = 0;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            s = 1;
        }
    }
        
        if(s==1){
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    return 0;
}