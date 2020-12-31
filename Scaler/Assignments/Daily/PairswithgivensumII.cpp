int Solution::solve(vector<int> &v, int k) {
    int n=v.size();
    int m=1e9+7;
	int i=0;
	int j=n-1;
	long long int count=0;
	while(i<j)
	{
		if((long long int)((long long int)v[i]+v[j])==k)
		{
		    long long int x=1,y=1;
		    long long int temp=i;
			while(v[i]==v[i+1])
			{
			    x++;
			    i++;
			}
			while(v[j]==v[j-1])
			{
			    y++;
			    j--;
			}
			if(i>=j)
			    count=count+(x*(x-1))/2;
			else
			count=count+(x*y);
		}
		if((long long int)((long long int)v[i]+v[j])>=k)
			j--;	
		else
			i++;
	}
	count=count%m;
    return count;
}
    