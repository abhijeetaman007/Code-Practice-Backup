#include<bits/stdc++.h>
using namespace std;
vector<int> greaterright(vector<int> &v)
{
	stack<int> s;
	int n=v.size();
	vector<int> gr(n,n);
	for(int i=0;i<n;i++)
	{
		if(s.empty() || v[i]<=v[s.top()])
		{
			s.push(i);
		}
		else
		{
			while(!s.empty() && v[i]>v[s.top()])
			{
				gr[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
	}
	return gr;
}

vector<int> greaterleft(vector<int> &v)
{
	stack<int> s;
	int n=v.size();
	vector<int> gl(n,-1);
	for(int i=n;i>=0;i--)
	{
		if(s.empty() || v[i]<v[s.top()])
		{
			s.push(i);
		}
		else
		{
			while(!s.empty() && v[i]>=v[s.top()])
			{
				gl[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
	}
	return gl;
}


vector<int> lesserright(vector<int> &v)
{
	stack<int> s;
	int n=v.size();
	vector<int> lr(n,n);
	for(int i=0;i<n;i++)
	{
		if(s.empty() || v[i]>=v[s.top()])
		{
			s.push(i);
		}
		else
		{
			while(!s.empty() && v[i]<v[s.top()])
			{
				lr[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
	}
	return lr;
}


vector<int> lesserleft(vector<int> &v)
{
	stack<int> s;
	int n=v.size();
	vector<int> ll(n,-1);
	for(int i=n;i>=0;i--)
	{
		if(s.empty() || v[i]>v[s.top()])
		{
			s.push(i);
		}
		else
		{
			while(!s.empty() && v[i]<=v[s.top()])
			{
				ll[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
	}
	return ll;
}


int main()
{
	long long int mod=1e9+7;
	int n;
	cin>>n;
	vector<int> v(n),gr,gl,lr,ll;
	for(int i=0;i<n;i++)
		cin>>v[i];
	gr=greaterright(v);
	gl=greaterleft(v);
	lr=lesserright(v);
	ll=lesserleft(v);
	long long int l,r,ans=0;
	long long int max=0;
	long long int min=0;
	for(int i=0;i<n;i++)
	{
		l=ll[i];
		r=lr[i];
		long long int x=((i-l)%mod)*((r-i)%mod)%mod;
		min=min%mod+(x%mod*v[i]%mod)%mod;
		min=min%mod;	
	}
	for(int i=0;i<n;i++)
	{
		l=gl[i];
		r=gr[i];
		long long int x=((i-l)%mod*(r-i)%mod)%mod;
		max=max%mod+(x%mod*v[i]%mod)%mod;
		max=max%mod;
	}
	ans=max-min;
	cout<<ans<<endl;
}

// for(int i=0;i<gr.size();i++)
// 	{
// 		cout<<v[gr[i]]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<gr.size();i++)
// 	{
// 		cout<<gr[i]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<gl.size();i++)
// 	{
// 		cout<<v[gl[i]]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<gr.size();i++)
// 	{
// 		cout<<gl[i]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<lr.size();i++)
// 	{
// 		cout<<v[lr[i]]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<lr.size();i++)
// 	{
// 		cout<<lr[i]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<ll.size();i++)
// 	{
// 		cout<<v[ll[i]]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=0;i<lr.size();i++)
// 	{
// 		cout<<ll[i]<<" ";
// 	}