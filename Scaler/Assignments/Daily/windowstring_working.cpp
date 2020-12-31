string Solution::minWindow(string a, string b) {
	vector<int> v;
	vector<int> v1(256,0),v2(256,0);
	unordered_map<char,int> m;
	for(int i=0;i<b.size();i++)
	{
		m[b[i]]=0;
		v1[b[i]]++;
	}
	for(int i=0;i<a.size();i++)
	{
		if(m.find(a[i])!=m.end())
		{
			v.push_back(i);
		}
	}
	int j=0;
    while(v1!=v2)
	{
		if(j==v.size())
		{
            string x="\0";
			return x;
		}
		if(v1[a[v[j]]]>v2[a[v[j]]])
		v2[a[v[j]]]++;
		m[a[v[j]]]++;
		j++;
	}
	int i=0;
	int ans=v[j]-v[i];
	int l=v[0];
	int r=v[j-1];
	j=j-1;
	while(m[a[v[i]]]>v1[a[v[i]]])
		{
			m[a[v[i]]]--;
			i++;
		}

	if(v[j]-v[i]+1<ans)
		{
			ans=v[j]-v[i]+1;
			l=v[i];
			r=v[j];
		}
	j++;
	while(j<v.size())
	{
		m[a[v[j]]]++;
		while(m[a[v[i]]]>v1[a[v[i]]])
		{
			m[a[v[i]]]--;
			i++;
		}
		if(v[j]-v[i]+1<ans)
		{
			ans=v[j]-v[i]+1;
			l=v[i];
			r=v[j];
		}
		j++;
	}
	string str;
	for(int k=l;k<=r;k++)
		str=str+a[k];
    return str;
}
    