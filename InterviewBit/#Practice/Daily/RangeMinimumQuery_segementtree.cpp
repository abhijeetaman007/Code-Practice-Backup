#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << '>' << #x << " : " << x << endl;


void build_segmenttree(vector<int> &v,int s,int e,int i,vector<int> &tree)
{
	if(s==e)
	{
		tree[i]=v[s];
		return;
	}
	
		int mid=(s+e)/2;
		int lc=2*i+1;
		int rc=2*i+2;
		build_segmenttree(v,s,mid,lc,tree);
		build_segmenttree(v,mid+1,e,rc,tree);
		tree[i]=min(tree[lc],tree[rc]);
		return ;
}

void update_segementtree(vector<int> &tree,int s,int e,int i,int idx,int val)
{
	if(idx<s || idx>e)
	{
		return;
	}
	if(s==e)
	{
		tree[i]=val;
		return;

	}
	
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	update_segementtree(tree,s,mid,lc,idx,val);
	update_segementtree(tree,mid+1,e,rc,idx,val);
	tree[i]=min(tree[lc],tree[rc]);
	return;
}

int query_segmenttree(vector<int>&tree,int s,int e,int i,int ql,int qr)
{
	if(qr<s || ql>e)
	{
		cout<<"no overlap"<<endl;
		return INT_MAX;
	}
	if(s==e)
	{
		cout<<"s==e"<<endl;

		return tree[i];
	}
	
	if(ql<=s && e <=qr)
	{
		cout<<"complete overlap"<<endl;
		return tree[i];
	}

	cout<<"partial "<<endl;
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	deb(s);
	deb(e);
	int a= min(query_segmenttree(tree,s,mid,lc,ql,qr),query_segmenttree(tree,mid+1,e,rc,ql,qr));
	deb(a);
	return a;
}



int main()
{

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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
	for(int i=0;i<m;i++)
	{
		cin>>b[i][0];
		cin>>b[i][1];
		cin>>b[i][2];
	}
	build_segmenttree(a,0,n-1,0,tree);
	cout<<"tree"<<endl;
	for(int i=0;i<tree.size();i++)
	{
		cout<<tree[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		int x=b[i][0];
		int y=b[i][1];
		int z=b[i][2];
		if(x==0)
		{
			update_segementtree(tree,0,n-1,0,y-1,z);
		}
		else if(x==1)
		{
			ans.push_back(query_segmenttree(tree,0,n-1,0,y-1,z-1));
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}