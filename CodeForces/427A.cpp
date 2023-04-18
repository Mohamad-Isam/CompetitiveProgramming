#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(unsigned i = 0; i < n; i++)
        cin >> v[i];
    int cops = 0, crimes = 0, result = 0;
    for(int x : v)
    {
        if(x > 0)
        {
            cops += x;
        }
        else
        {
            crimes++;
            if(crimes - cops > result)
                result = crimes - cops;
        }

    }
    if(result < 0)
        cout << 0;
    else
        cout << result;
    return 0;
}
