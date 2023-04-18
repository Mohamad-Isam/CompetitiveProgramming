#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, h, a;
    cin >> n;
    vector<int> host;
    vector<int> guest;
    while(n--)
    {
        cin >> h >> a;
        host.push_back(h);
        guest.push_back(a);
    }
    int counter = 0;
    for(int a : host)
        for(int b : guest)
            if(a == b) counter++;

    cout << counter;

    return 0;
}
