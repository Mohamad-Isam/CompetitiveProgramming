#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s1, s2, s3, result;
    cin >> s1 >> s2 >> s3;
    s1 += s2;
    if(s1.size() != s3.size())
    {
        cout << "NO";
        return 0;
    }
    for(unsigned int i = 0; i < s1.size(); i++)
    {
        for(unsigned int j = 0; j < s3.size(); j++)
        {
            if(s1[i] == s3[j])
            {
                s3.erase(s3.begin() + j);
                break;
            }
        }
    }
    if(s3.size() == 0)
        cout << "YES";
    else
        cout << "NO";



    return 0;
}
