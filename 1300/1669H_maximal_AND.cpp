#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n,k;
    cin>>n>>k;
    vector <int> nums(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin>>nums[i];        
    }
    //solution

    vector<int> bit(31);
    int finalans = 0;
    for (int i = 0 ; i < nums.size() ; i++)
    {
        int temp_num = nums[i] , count = 0;
        while (temp_num > 0)
        {
            if ((temp_num & 1) == 1) bit[count]++;
            temp_num >>=  1;
            count++;
        }
    }

    for (int i = 30 ; i >=0 ; i--)
    {
        if ( n - bit[i] <= k)
        {
            finalans += pow(2,i);
            k -= (n-bit[i]) ;
        }
    }
    cout<<finalans<<"\n";
    
}


int main ()
{
    int t ;

    cin>>t;
    while (t--)
    {
        solve();

    }
    return 0;
}