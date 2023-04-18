#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, result;
    cin >> s;
    for(unsigned int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            result += ' ';
            continue;
        }
        else
        {
            result += s[i];
        }

    }
    for(int i = 0; i < result.size(); i++)
    {
        if(result[i] == ' ')
            {result.erase(result.begin() + i);
                i--;
            }
        else
            break;
    }
    for(int i = result.size() - 1; i >= 0; i--)
    {
        if(result[i] == ' ')
            result.erase(result.begin() + i);
        else
            break;
    }
    cout << result;


    return 0;
}
