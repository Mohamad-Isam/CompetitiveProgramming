#include<bits/stdc++.h>
using namespace std;

bool YES(string s)
{
    string word = "yes";
    for(int i = 0; i < 3; i++)
        if(tolower(s[i]) != word[i]) return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        cout << (YES(s) ? "YES\n" : "NO\n");
    }
    return 0;
}
