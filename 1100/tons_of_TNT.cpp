#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n ;
    long long ans = 0;

    cin>>n;
    vector <int> nums(n);
    int mx = INT_MIN , mn = INT_MAX;

    for (int i = 0 ; i < n ; i++)
    {
        cin>>nums[i];
        mx = max(mx , nums[i]);
        mn = min (mn , nums[i]);        
    }

    int i = 0 , j = n - 1 ;
    long long  left_sum = 0 , right_sum = 0;
    int count = 1;
    while (i < j)
    {
       
        left_sum += nums[i];
        right_sum += nums[j];

        if (n % count == 0 ) ans = max(ans , abs(right_sum - left_sum));


        i++;
        j--;
        count++;

    }
    ans = max(ans , 1LL * mx - mn);

    cout<<ans<<endl;


    
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