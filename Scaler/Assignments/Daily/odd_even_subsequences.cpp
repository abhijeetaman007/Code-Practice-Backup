int Solution::solve(vector<int> &a) {
        int count=0,flag=0;
        if(a[0]&1>0)
        flag=1;
        for(int i=0;i<a.size();i++)
        {
            if(flag==1)
            {
                if(a[i]%2!=0)
                {
                    count=count+1;
                    flag=0;
                    continue;
                }
            }
            if(flag==0)
            {
                if(a[i]%2==0)
                {
                    count=count+1;
                    flag=1;
                    continue;
                }
            }
        }
    return count;
}
