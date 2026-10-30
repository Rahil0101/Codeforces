    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;



    void solve()
    {
        int n;
        cin>>n;
        vector <int> nums(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin>>nums[i];        
        }
        long long  i = 0 , j = nums.size() - 1 , x = 0;
        long long attack = 0 ;
        sort(nums.begin() , nums.end());
        while (i < j )
        {
            int use = nums[j] - x;
            x += min(nums[i] , use);
            attack += min(nums[i] , use);
            nums[i] = nums[i] - min(nums[i] , use);

            if (nums[i] == 0) i++;

            if (x == nums[j])
            {
                attack += 1;
                j--;
                x = 0;
            }

        }
        if (i == j)
        {
            int left = 0 , right = nums[j];
            
            while (left < right)
            {
                long long mid = (left + right) / 2;

                if ((x + mid + mid) < nums[j]) left = mid + 1; 

                else right = mid;
            }
            attack += left + 1;
            if (nums[j] == 1) attack--;
        }
        cout<<attack<<"\n";

        
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