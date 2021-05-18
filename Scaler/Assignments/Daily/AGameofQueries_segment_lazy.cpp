#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << '>' << #x << " : " << x << endl;
void build(int s,int e,int i,std::vector<int> &tree,vector<int> &v)
{
	if(s==e)
	{
		tree[i]=v[s];
		return;
	}
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	build(s,mid,lc,tree,v);
	build(mid+1,e,rc,tree,v);
	tree[i]=min(tree[lc],tree[rc]);
	return;

}
void update(vector<int> &lazy,vector<int> &tree,int s,int e,int i,int ql,int qr,int val)
{	
	//Resolve lazy;
	deb(s);
	deb(e);
	if(lazy[i]!=0)
	{
		tree[i]+=lazy[i];
		lazy[2*i+1]+=lazy[i];
		lazy[2*i+2]+=lazy[i];
		lazy[i]=0;
	}

	if(s>qr || e<ql)
	{
		cout<<"no overlap"<<endl;
		return;
	}

	if(ql<=s && e<=qr)
	{
		deb(s);
		deb(e);
		cout<<"complete overlap"<<endl;
		
		tree[i]+=val;
		if(s!=e)
		{
			lazy[2*i+1]+=val;
			lazy[2*i+2]+=val;	
		}	
		deb(tree[i]);
		return;	
	}
	int mid=(s+e)/2;

	update(lazy,tree,s,mid,2*i+1,ql,qr,val);
	update(lazy,tree,mid+1,e,2*i+2,ql,qr,val);
	deb(s);
	deb(e);

	deb(tree[i]);
	tree[i]=min(tree[2*i+1],tree[2*i+2]);
	deb(tree[i]);
	return;
}

int query(vector<int> &lazy,vector<int> &tree,int s,int e,int i,int ql,int qr)
{
	deb(s);
	deb(e);
	if(lazy[i]!=0)
	{
		tree[i]+=lazy[i];
		lazy[2*i+1]+=lazy[i];
		lazy[2*i+2]+=lazy[i];
		lazy[i]=0;
	}
	if(s>qr || e<ql)
	{
		return INT_MAX;
	}

	if(ql<=s && e<=qr)
	{
		return tree[i];
	}

	int mid=(s+e)/2;
	return min(query(lazy,tree,s,mid,2*i+1,ql,qr),query(lazy,tree,mid+1,e,2*i+2,ql,qr));

}

int main()
{

	#ifndef ONLINE_JUDGE
    freopen("/home/abhijeet/AMAN/Code/program_cpp/Scaler/Assignments/Daily/input/input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	vector< vector<int> >b(m,vector<int> (3)); 
	std::vector<int> ans;
	int N=4*n;
	std::vector<int> tree(N);
	std::vector<int> lazy(N,0);

	for(int i=0;i<m;i++)
	{
		cin>>b[i][0];
		cin>>b[i][1];
		cin>>b[i][2];
	}
	build(0,n-1,0,tree,a);
	// cout<<"tree"<<endl;
	// for(int i=0;i<tree.size();i++)
	// {
		// cout<<tree[i]<<" ";
	// }
	// cout<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<"tree"<<endl;
		for(int i=0;i<tree.size();i++)
		{
			cout<<tree[i]<<" ";
		}
		cout<<endl;
		int x=b[i][0];
		int y=b[i][1];
		int z=b[i][2];
		deb(x);
		deb(y);
		deb(z);
		int t1=y;
		int t2=z;
		int t=INT_MAX;
		int f=0;
		if(z<y)
		{

			z=a.size();
			deb(y);
			deb(z);
			if(x!=2)
			{
				cout<<"update"<<endl;
				update(lazy,tree,0,n-1,0,y-1,z-1,x);
			}
			else if(x==2)
			{
				cout<<"query"<<endl;
				cout<<"start"<<endl;
				t=query(lazy,tree,0,n-1,0,y-1,z-1);
				cout<<"end"<<endl;
			}
			f=1;						
		}
			if(f==1)
			{
				y=1;
				z=t2;
				f=0;
			}
			deb(y);
			deb(z);
			if(x!=2)
			{
				cout<<"update"<<endl;
				update(lazy,tree,0,n-1,0,y-1,z-1,x);
			}
			else if(x==2)
			{
				cout<<"query"<<endl;
				cout<<"start"<<endl;
				ans.push_back(min(t,query(lazy,tree,0,n-1,0,y-1,z-1)));
				cout<<"end"<<endl;
			}
	}
	cout<<"ans is "<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}