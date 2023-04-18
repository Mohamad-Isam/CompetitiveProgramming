#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] += k;
    }

    int counter = 0;
    for(int x : v)
        if(x <= 5)
            counter++;

    cout << counter / 3;

    return 0;
}
