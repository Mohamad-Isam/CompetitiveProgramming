#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string result = "";
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        if(v.size() == 1)
        {
            cout << "YES\n";
            continue;
        }
        for(int i = 0; i < v.size() - 1; i++)
        {
            if(v[i] - v[i + 1] > 1 || v[i + 1] - v[i] > 1)
            {
                result = "NO";
                break;
            }
        }
        if(result == "NO")
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
