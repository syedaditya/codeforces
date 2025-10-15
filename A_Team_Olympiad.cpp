#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> math, prog, pe;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            prog.push_back(i);
        else if (x == 2)
            math.push_back(i);
        else if (x == 3)
            pe.push_back(i);
    }
    int a = min(math.size(), min(prog.size(), pe.size()));
    cout << a << endl;
    for (int i = 0; i < a; i++)
    {

        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }
}