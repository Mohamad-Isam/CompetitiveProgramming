#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(unsigned i = 0; i < n; i++)
        cin >> v[i];
    int result = 0, minimum = v[0] , maximum = v[0];
    for(unsigned int i = 1; i < n ; i++)
    {
        if(v[i]  >  maximum)
        {
            result++;
            maximum = v[i];
        }
        else if(v[i] < minimum)
        {
            result++;
            minimum = v[i];
        }
    }
    cout << result;
    return 0;
}
