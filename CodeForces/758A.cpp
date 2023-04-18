#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] > maximum)
            maximum = v[i];
    }
    int res = 0;
    for(int x : v)
        res += (maximum - x);

    cout << res << '\n';


    return 0;
}
