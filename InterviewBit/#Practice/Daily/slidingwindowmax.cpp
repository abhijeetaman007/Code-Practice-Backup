#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),ans;
	deque<int> q;
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	int start=1,mx=INT_MIN,idx;
	for(int i=0;i<k;i++)
	{
		if(mx<v[i]){
			mx=v[i];
			idx=i;
		}
	}
	ans.push_back(v[idx]);
	q.push_back(idx);
	for(int i=idx+1;i<k;i++)
	{
		if(v[idx]>=v[i])
		{
			while(!q.empty() && v[i]>v[q.back()])
            {   
                q.pop_back();
            }
			q.push_back(i);
		}
	}
	int i=k;
	while(i<n)
	{

		while(!q.empty() && start>q.front())
		{
			q.pop_front();
			cout<<"popped front "
		}

		while(!q.empty() && v[i]>v[q.back()])
		{
			q.pop_back();
		}

		if(q.empty() || v[i]<=v[q.back()])
		q.push_back(i);
		

		ans.push_back(v[q.front()]);
		i++;
		start++;
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";

}