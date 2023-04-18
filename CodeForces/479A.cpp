#include<bits/stdc++.h>
using namespace std;

int main()
{
    short a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int res1, res2, res3, res4, res5;
    res1 = a + b * c;
    res2 = a * b * c;
    res3 = (a + b) * c;
    res4 = a * (b + c);
    res5 = a + b + c;
    if(res1 >= res2 && res1 >= res3 && res1 >= res4 && res1 >= res5)
        cout << res1;
    else     if(res2 >= res1 && res2 >= res3 && res2 >= res4 && res2 >= res5)
        cout << res2;
    else     if(res3 >= res2 && res3 >= res1 && res3 >= res4 && res3 >= res5)
        cout << res3;
    else if(res4 >= res2 && res4 >= res1 && res4 >= res3 && res4 >= res5)
        cout << res4;
    else
        cout << res5;
    return 0;
}
