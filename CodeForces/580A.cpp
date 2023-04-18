#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n, a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        v.push_back(a);
    }
    int counter = 1, result = 0;
    for(unsigned int i =1; i < v.size(); i++)
    {
        if(v[i] >= v[i - 1])
            counter++;
        else
        {
            if(counter > result)
                result = counter;
            counter = 1;
        }
    }
    if(counter > result)
        result = counter;
    cout << result << "\n";


    return 0;
}
