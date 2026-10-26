    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;

    int N = 1000000;
    vector<bool> ans (N+1 , false); 

    void solve()
    {
        int n;
        cin>>n;

        cout<< (ans[n] ? "YES" : "NO") <<"\n"; 
        

    
        
    }


    int main ()
    {

        for (long long k = 2 ; k * k + k + 1<= N ; k++)
        {
            long long  exp_factor = k * k ;
    
            for (long long  j = k * k + k + 1 ; j <= N ; j = j + exp_factor)
            {   

                ans[j] = true;
                exp_factor *= k;
            }
        }


        int t ;

        cin>>t;
        while (t--)
        {
            solve();

        }
        return 0;
    }