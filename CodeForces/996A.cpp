#include <bits/stdc++.h>
using namespace std;


int main()
{
    long n;
    long result100 = 0, result20 = 0, result10 = 0, result5 = 0, result = 0;
    cin >> n;
    //100, 20, 10, 5, 1
    if(n >= 100)
    {
        result100 += n / 100;
        n -= result100 * 100;
    }
    if(n >= 20)
    {
        result20 += n / 20;
        n -= result20 * 20;
    }
    if(n >= 10)
    {
        result10 += n / 10;
        n -= result10 * 10;
    }
    if(n >= 5)
    {
        result5 += n / 5;
        n -= result5 * 5;
    }
    result += n;
    cout << result + result100 + result20 + result10 + result5;


    return 0;
}
