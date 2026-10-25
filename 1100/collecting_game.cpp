#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n;
    cin>>n;
    vector <pair<int,int>> nums(n);
    vector <int> ans(n);

    for (int i = 0 ; i < n ; i++)
    {
        cin>>nums[i].first;
        nums[i].second = i ;
    }
    sort(nums.begin() , nums.end());
    int j = 0 ,  count = 0 , i = 0;
    long long sum = 0 ;

    for (; i < nums.size() - 1; i ++)
    {
        sum += nums[i].first;

        if (sum >= nums[i + 1].first) count++;

        else {
            int temp = j;
            while (j <= i)
            {
                ans[nums[j].second] = temp + count;
                j++;
         
            }
                   count = 0;
        }

    }
    int temp = j;
            while (j <= i)
            {
                ans[nums[j].second] = temp + count;
                j++;
            }
   

    for (auto &it : ans)
    {
        cout<<it<<" "; 
    }


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