#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n; 
    cin >> n;
    if(n < 26)
    {
        cout << "NO";
        return 0;
    }
    cin >> s;
    for(unsigned int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if(s.size() >= 26)
        cout << "YES";
    else
        cout << "NO";



    return 0;
}
