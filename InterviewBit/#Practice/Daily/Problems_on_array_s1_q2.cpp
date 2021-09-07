//Finding subarray with sum zero---Use prefix sum and set
#include<bits/stdc++.h>
using namespacestd;

int Solution::solve(vector<int> &v) {
   set <long long int> s;
    long long int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
        // auto itr;
    
        if(s.find(sum)!=s.end())
        {
            return 1;
        }
        else
        s.insert(sum);
        // s.push_back(sum);
        
        if(sum==0)
        {
            return 1;
        }
    }
    return 0;
}
