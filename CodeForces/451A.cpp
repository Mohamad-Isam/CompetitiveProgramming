#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    cin >> n >> m;
    //Akshat == 1, Malvika == -1;
    int player = 1;
    while(n-- > 0 && m-- > 0)
        player *= -1;

    if(player == -1)
        cout << "Akshat";
    else
        cout << "Malvika";


    return 0;
}
