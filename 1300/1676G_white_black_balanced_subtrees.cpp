#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n;
    cin>>n;
    vector <int> root(n - 1);
    string color ;
  
    for (int i = 0 ; i < n - 1 ; i++)
    {
        cin>>root[i];    
    }
    cin>>color; 
    
    //solution

    vector<vector<int>> dp (n + 1 , vector<int> (2 , 0));
    unordered_map <char, int> mp= {{'B',0} , {'W',1}}; 
    for (int i = 1 ; i <=n ; i++)
    {
        dp[i][mp[color[i-1]]] ++;
    }


    for (int i = n - 2 ; i >= 0 ; i--)
    {
        for (auto &it :mp)
        {
            dp[root[i]][it.second] += dp[i+2][it.second];
        }
    }

    int count = 0;
    for (int i = 1 ; i < dp.size() ; i++) 
        {
        if (dp[i][0] == dp[i][1]) count++;
    }
    cout<<count;

    cout<<"\n";
    
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