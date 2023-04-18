#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            vector<int> leftV, rightV;
            int x = n / 2;
            int z = 1;
            int y = n + 1;
            while(1)
            {

                rightV.push_back(z);
                x--;
                rightV.push_back(y);
                x--;
                z += 2;
                y -= 2;
                if(x == 0)
                    break;
            }
            x = n / 2;
            z = 2;
            y = n;
            while(1)
            {
                leftV.push_back(z);
                x--;
                leftV.push_back(y);
                x--;
                z += 2;
                y -= 2;
                if(x == 0)
                    break;
            }
            for(int x : rightV)
                leftV.push_back(x);
            cout << "YES\n";
            for(int x : leftV)
                cout << x << " ";
            cout << '\n';
        }

    }
    return 0;
}
