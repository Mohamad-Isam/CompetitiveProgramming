#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, a;
    vector<int> nums;
    cin >> n;
    while(n--)
    {
        cin >> a;
        nums.push_back(a);
    }
    int counter = 0;
    for(unsigned int i = 0; i < 3; i++)
    {
        if(nums[i] % 2 == 0)
            continue;
        else
            counter++;
    }
    //if one number is odd then counter should be <= 1
    //else the different number is even
    if(counter <= 1)
    {
        for(unsigned int i = 0; i < nums.size(); i++)
            if(nums[i] % 2 == 1)
                cout << ++i;
    }
    else
        for(unsigned int i = 0; i < nums.size(); i++)
            if(nums[i] % 2 == 0)
                cout << ++i;

    return 0;
}
