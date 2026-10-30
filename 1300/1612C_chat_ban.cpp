#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    long long  x , k;
    cin>>k;
    cin>>x;
  
    // solution

    long long  left = 1 , right = 2 * k - 1;
    while (left < right)
    {
        long long  mid = (left + right) / 2 , sum = 0;

        long long  second_half = mid - k;
        
        sum = (min(mid, k) * (min(mid, k) + 1)) / 2;


        if (second_half > 0)
        {
            long long second = (k - 1) - second_half;
            long long  sum_second_half = ((k-1) * k) / 2  - (second * (second+1)) / 2;
            sum += sum_second_half; 

        }
        if (sum < x) left = mid + 1;

        else right = mid;
    }

    cout<<left<<"\n";
    
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