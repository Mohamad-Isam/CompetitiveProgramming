#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, res;
        cin >> s;
        res += s[0];
        for(int i = 1; i < s.size(); i += 2)
            res += s[i];

        cout << res << '\n';
    }


    return 0;
}
