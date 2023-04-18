#include<bits/stdc++.h>
using namespace std;

vector<int> numberToSums(int num)
{
    vector<int> v;
    int counter = 1;
    while(num)
    {
        if(num % 10 != 0)
        {
            v.push_back((num % 10) * counter);
        }
        counter *= 10;
        num /= 10;
    }
    return v;
}

int main()
{
    int t, n;
    cin >> t;
    while(t)
    {
        cin >> n;
        vector<int> v = numberToSums(n);
        cout << v.size() << '\n';
        for(int x : v)
            cout << x << " ";
        cout << '\n';
        t--;
    }

    return 0;
}
