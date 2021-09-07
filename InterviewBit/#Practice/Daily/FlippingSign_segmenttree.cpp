#include<bits/stdc++.h>
using namespace std;

void build(int s,int e,int i,vector<int> &tree,vector<int> &v)
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
	tree[i]=tree[lc]+tree[rc];
	return;
}

void update(int s,int e,int i,int ql,int qr,vector<int>&tree,vector<int>&lazy)
{
	//resolve lazy
	if(lazy[i]!=0)
	{
		tree[i]=tree[i]*lazy[i];
		if(s!=e)
		{
			lazy[2*i+1]=lazy[i];
			lazy[2*i+2]=lazy[i];
		}
		lazy[i]=1;
	}
	if(s>qr || e<ql)
	{
		return ;
	}
	if(ql<=s && qr>=e)
	{
		cout<<"inside"<<endl;
		tree[i]=tree[i]*(-1);
		if(s!=e)
		{
			lazy[2*i+1]=lazy[2*i+1]*(-1);
			lazy[2*i+2]=lazy[2*i+2]*(-1);
		}
		return;
	}
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	update(s,mid,lc,ql,qr,tree,lazy);
	update(mid+1,e,rc,ql,qr,tree,lazy);
	tree[i]=tree[lc]+tree[rc];
	return;

}

int query(int s,int e,int i,int ql,int qr,vector<int>&tree,vector<int>&lazy)
{	
	//Resolve Lazy
	if(lazy[i]!=0)
	{
		tree[i]=tree[i]*lazy[i];
		if(s!=e)
		{
			lazy[2*i+1]=lazy[i];
			lazy[2*i+2]=lazy[i];		
		}
		lazy[i]=1;
	}
	if(s>qr || e<ql)
	{
		return 0;
	}
	
	if(ql<=s && qr>=e)
	{
		return tree[i];
	}
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;

	return query(s,mid,lc,ql,qr,tree,lazy)+query(mid+1,e,rc,ql,qr,tree,lazy); 
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
	std::vector<int> lazy(N,1);

	for(int i=0;i<m;i++)
	{
		cin>>b[i][0];
		cin>>b[i][1];
		cin>>b[i][2];
	}
	cout<<"build"<<endl;
	build(0,n-1,0,tree,a);
	cout<<"build end"<<endl;
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
		if(x==1)
		{
			cout<<"flip"<<endl;
			update(0,n-1,0,y-1,z-1,tree,lazy);
			cout<<"tree"<<endl;
			for(int i=0;i<tree.size();i++)
			{
				cout<<tree[i]<<" ";
			}
			cout<<endl;
		}
		else if(x==2)
		{
			ans.push_back(query(0,n-1,0,y-1,z-1,tree,lazy));
		}

	}
	cout<<"ans is "<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}