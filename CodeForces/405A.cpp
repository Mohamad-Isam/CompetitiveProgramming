#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n, a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int a : v)
        cout << a << " ";


    return 0;
}
