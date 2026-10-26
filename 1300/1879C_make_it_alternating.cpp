#include <iostream>
#include <bits/stdc++.h>

using namespace std;


const long long MOD = 998244353;
const int N = 200000;
vector<long long > dp(N + 1 ,1);

void solve()
{
    
    string s;
    cin>>s;


    long long  ans = 1 , n = s.size();
  
    int count = 1 , del = 0;

  

    for (int i = 0 ; i < n - 1 ; i++)
    {
        if (s[i] == s[i+1]) count++;

        else{
            ans = (ans*count) % MOD;
            del += count - 1 ;
            count = 1;
        }
    }

    del += count - 1;
    ans  = (ans*count)  % MOD;

    ans  = (ans* dp[del]) % MOD;

    cout <<del<< " "<<ans<<endl;

}


int main ()
{
      // precompute the factorials since array length can be 2 * 10^5 hence the factorials are computed till there.

    for (int i = 1 ; i <= N ; i++  )
    {
        dp[i] = i * dp[i-1] % MOD;
    }
    int t ;

    cin>>t;
    while (t--)
    {
        solve();

    }
    return 0;
}