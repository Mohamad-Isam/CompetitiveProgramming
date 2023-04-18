#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int k = ceil(abs(a - b) / 10.0);
        cout << k << '\n';
    }

    return 0;
}
