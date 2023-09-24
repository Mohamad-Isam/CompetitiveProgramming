#include <bits/stdc++.h>
using namespace std;

const double PI = 3.1415926535;
const long MOD = 1000000007;

int sum_of_sub_strings(string s)
{
    int SIZE = s.length();
    long long ans = 0;
    vector<int> dp(SIZE);
    dp[0] = (s[0] - '0');
    ans += dp[0];

    for(int i = 1; i < SIZE; i++)
        ans += dp[i] = ((i + 1) * (s[i] - '0') + 10 * dp[i - 1]) % MOD;
    
    return ans % MOD;
}

void solve()
{
    string s;
    cin >> s;
    cout << sum_of_sub_strings(s);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
