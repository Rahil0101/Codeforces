#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void solve()
{
    int n;
    cin>>n;
    vector <long long> a(n);
    vector <long long> b(n);

    vector<pair<long long,long long >> sorted (n);

    for (int i = 0 ; i < n ; i++)
    {
        cin>>a[i];        
    }
    for (int i = 0 ; i < n ; i++)
    {
        cin>>b[i];        
    }
    long long maxi = LLONG_MIN ;
    int count = 0;
    for (int i = 0 ; i < n ; i ++)
    {
        sorted[i].first = a[i] - b[i];
        if (sorted[i].first > maxi)        {
            maxi = max(sorted[i].first , maxi);
            count = 1;
        }
        else if (sorted[i].first == maxi) count++;

        sorted[i].second = i + 1;
    }
    cout<<count<<"\n";
    
    for (int i = 0 ; i < sorted.size() ; i++)
    {

        if (sorted[i].first == maxi) cout<<sorted[i].second<<" ";
    }
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