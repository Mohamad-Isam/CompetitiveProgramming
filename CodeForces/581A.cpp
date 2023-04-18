#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;
    int result1 = 0, result2 = 0;
    while(a != 0 && b != 0)
    {
        --a;
        --b;
        result1++;
    }
    result2 = (a + b) / 2;
    cout << result1 << " " << result2;

    return 0;
}
