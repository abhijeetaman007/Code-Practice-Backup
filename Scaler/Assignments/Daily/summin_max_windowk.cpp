#include<bits/stdc++.h>
using namespace std;
vector<int> slidingMaximum(vector<int> &v, int k) {
    int n=v.size();
	vector<int> ans;
	deque<int> q;
	if(k>=n)
	{
	    ans.push_back(*max_element(v.begin(),v.end()));
	    return ans;
	}
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
	return ans;
}

vector<int> slidingMinimum(vector<int> v,int k)
{
	int n=v.size();
	vector<int> ans;
	deque<int> q;
	if(k>=n)
	{
		ans.push_back(*min_element(v.begin(),v.end()));
		return ans;
	}
	int start=1,mn=INT_MAX,idx;
	for(int i=0;i<k;i++)
	{
		if(mn>v[i]){
			mn=v[i];
			idx=i;
		}
	}
	ans.push_back(v[idx]);
	q.push_back(idx);
	for(int i=idx+1;i<k;i++)
	{
		if(v[idx]<=v[i])
		{
            while(!q.empty() && v[i]<v[q.back()])
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
		}

		while(!q.empty() && v[i]<v[q.back()])
		{
			q.pop_back();
		}

		if(q.empty() || v[i]>=v[q.back()])
		q.push_back(i);

		ans.push_back(v[q.front()]);
		i++;
		start++;
	}
	return ans;
}





int main()
{
	int n;
	cin>>n;
	vector<int> v(n),mx,mn;
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	mx=slidingMaximum(v,k);
	mn=slidingMinimum(v,k);
	long long int sum=0;
	for(int i=0;i<mx.size();i++)
	{
		// ans[i]=mx[i]+mn[i];
		// cout<<"max is "<<mx[i]<<" min is "<<mn[i]<<endl;
		sum=sum+mx[i]+mn[i];
	}00
	cout<<"sum is "<<sum<<endl;

}