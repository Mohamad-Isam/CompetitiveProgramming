#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n , m;
    cin >> n >> m;
    string result;
    for(unsigned int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 0; j < m; j++)
                result += "#";
            result += "\n";
        }
        else if(i % 4 == 0)
        {
            result += "#";
            for(int j = 1; j < m; j++)
                result += ".";

            result += "\n";
        }
        else if(i % 2 == 0)
        {
            for(int j = 1; j < m; j++)
                result += ".";

            result += "#";
            result += "\n";
        }
    }
    result.erase(result.begin() + result.size() - 1);
    cout << result;

    return 0;
}
