// Time complexity O(nlogn)
int Solution::solve(vector<int> &v) {
	//Preprocessing to store all prime factors till 10^6
		int n,a;
	//sieve + spf
	n=100000;
	vector<int> spf(n+1);
	vector<bool> prime(n+1,true);
	prime.at(0)=false;
	prime.at(1)=false;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;i*j<=n;j++)
		{
			if(prime[i])
			{
				spf[i*j]=i;
				if(j!=1)
				prime[i*j]=false;
			}
		}
	}

	//storing prime factors
	vector<vector<int> > primefact(n+1);
	primefact[0].push_back(0);
	primefact[1].push_back(1);
	for(int i=2;i<100000;i++)
	{
		int num=i;
		while(num>1)
		{
			a=spf[num];
			primefact[i].push_back(a);
			num=num/a;
		}
	}
	set<int> s;
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<primefact[v[i]].size();j++)
		{
		        if(v[i]!=0 && v[i]!=1)
    			s.insert(primefact[v[i]][j]);
		}
	}
	return s.size();
}
