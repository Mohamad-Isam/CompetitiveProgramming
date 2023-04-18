#include<bits/stdc++.h>
using namespace std;



int main()
{
    int w, x, y, z;
    int a, b, c;
    cin >> w >> x >> y >> z;
    if(z >= w && z >= x && z >= y)
    {
         b = z - x;
         a = z - y;
         c = z - w;
    }
    else if(y >= w && y >= x && y >= z)
    {
         a = y - z;
         b = y - x;
         c = y - w;
    }
    else if(x >= w && x >= z && x >= y)
    {
         a = x - y;
         b = x - z;
         c = x - w;
    }
    else if(w >= z && w >= x && w >= y)
    {
         a = w - y;
         b = w - x;
         c = w - z;
    }
    else
    {
         a = x - y;
         b = x - z;
         c = x - w;
    }

    cout << a << " " << b <<  " " << c;

    return 0;
}
