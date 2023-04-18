#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        int evens = 0, odds = 0;

        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0 && v[i] % 2 != 0)
                evens++;
            if(i % 2 == 1 && v[i] % 2 != 1)
                odds++;
        }

        cout << (odds == evens ? odds : -1) << '\n';
    }
    return 0;
}
