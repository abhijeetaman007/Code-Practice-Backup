#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans;
	cin>>n;
	vector<int> a(n),b(n);
	long long int sum=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	deque<int> q;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i]-b[i];
		q.push_back(i);
	}
	if(sum<0)
		ans=-1;
	else
	{
		int c=0;
		// int start;
		int count=0;
		while(count!=n)
		{
			c=c+a[q.front()]-b[q.front()];
			if(c>=0)
			{
				q.push_back(q.front());
				count++;
				q.pop_front();
			}
			else
			{
				c=0;
				count=0;
				q.push_back(q.front());
				q.pop_front();				
			}
		}
	}
	ans=q.front();
	cout<<ans<<endl;

}