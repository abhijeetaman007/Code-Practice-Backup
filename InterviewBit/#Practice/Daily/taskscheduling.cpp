#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	queue<int> q;
	for(int i=0;i<n;i++){
		cin>>a[i];
		q.push(a[i]);
	}
	for(int i=0;i<n;i++)
		cin>>b[i];
	int i=0;
	int ans=0;
	while(i<n)
	{
		while(b[i]!=q.front())
		{
			q.push(q.front());
			q.pop();
			ans++;
		}
		if(q.front()==b[i])
		{
			q.pop();
			i++;
			ans++;
		}
	}
	cout<<ans<<endl;
}