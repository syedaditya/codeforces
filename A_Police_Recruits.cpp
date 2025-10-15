#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int crime = 0;
    int police = 0;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin>>y;
        if (y>0)
        {
            police =police + y;

        }
        else{
            if (police < 1)
            {
                crime++;
            }
            else{
                police--;
            }
            
        }
        
    }
    cout<<crime;
    
}