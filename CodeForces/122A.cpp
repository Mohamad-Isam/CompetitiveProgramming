#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int x;
    cin >> x;
    if(x < 4)
    {
        cout << "NO";
        return 0;
    }
    if(x % 4 == 0)
        cout << "YES";
    else if(x % 7 == 0)
        cout << "YES";
    else if(x % 47 == 0)
        cout << "YES";
    else if(x % 74 == 0)
        cout << "YES";
    else if(x % 447 == 0)
        cout << "YES";
    else if(x % 477 == 0)
        cout << "YES";
    else
    {
        string s = to_string(x);
        for(unsigned int i = 0; i < s.size(); i++)
        {
            if(s[i] == '7')
                continue;
            else if(s[i] == '4')
                continue;
            else
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }

    return 0;
}
