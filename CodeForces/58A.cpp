#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int counter = 0;
    string result;
    char x = 'a';
    for(unsigned int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'h' && x == 'a')
        {
            x = 'h';
            result += s[i];
        }
        else if(s[i] == 'e' && x == 'h')
        {
            result += s[i];
            x = 'e';
        }
        else if(s[i] == 'l' && x == 'e')
        {
            result += s[i];
            x = 'l';
        }
        else if(s[i] == 'l' && x == 'l')
        {
            result+= s[i];
            x = 'm';
        }
        else if(s[i] == 'o' && x == 'm')
        {
            result += s[i];
            break;
        }
    }
    if(result == "hello")
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
