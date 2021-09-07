#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<< " > "<< #x <<" : "<<x<<endl;
int power(int a,int b)
{
	int res=1;
	int x=a;
	while(b!=0)
	{
		
		if(b&1)
		{
			res=res*x;
			b=b-1;
		}
		else
		{
			x=((x%3)*(x%3))%3;
			b=b/2;
		}
	}
	return res;
}

void build(int s,int e,int i,vector<int> &tree,string v)
{
	// deb(s);
	// deb(e);
	if(s==e)
	{
		if(v[s]=='1')
		{
			tree[i]=1;
		}
		else
		{
			tree[i]=0;
		}
		return;
	}

	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	build(s,mid,lc,tree,v);
	build(mid+1,e,rc,tree,v);
	tree[i]=((tree[lc]*power(2,(e-mid)))%3+tree[rc]%3)%3;
	return;
}

void update(int s,int e,int i,int idx,std::vector<int> &tree)
{
	if(s>idx || e<idx)
	{
		return;
	}
	if(s==e)
	{
		cout<<"s==e"<<endl;
		deb(s);
		deb(e);
		deb(tree[i]);
		tree[i]=1;
		return;
	}
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	update(s,mid,lc,idx,tree);
	update(mid+1,e,rc,idx,tree);
	deb(s);
	deb(e);
	tree[i]=((tree[lc]*power(2,(e-mid)))%3+tree[rc]%3)%3;
	deb(tree[i]);
	return;
}

int query(int s,int e,int i,int ql,int qr,vector<int>tree)
{
	if(qr<s || ql>e)
		return -1;
	if(s==e)
		return tree[i];
	if(ql<=s && qr>=e)
		return tree[i];
	int mid=(s+e)/2;
	int lc=2*i+1;
	int rc=2*i+2;
	int l=query(s,mid,lc,ql,qr,tree);
	int r=query(mid+1,e,rc,ql,qr,tree);
	deb(s);
	deb(e);
	deb(mid);
	deb(l);
	deb(r);
	if(l==-1)
		return r;
	if(r==-1)
		return l;
	int ans=((l*power(2,e-mid))%3+r%3)%3;
	deb(ans);
	return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("/home/abhijeet/AMAN/Code/program_cpp/Scaler/Assignments/Daily/input/input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    string a;
    cin>>a;
    int n=a.size();
	int q;
	cin>>q;
	vector< vector<int> >b(q,vector<int> (3)); 
	std::vector<int> ans;
	int N=4*n;
	std::vector<int> tree(N);
	for(int i=0;i<q;i++)
	{
		cin>>b[i][0];
		cin>>b[i][1];
		cin>>b[i][2];
	}
	cout<<"build"<<endl;
	build(0,n-1,0,tree,a);
	cout<<"build end"<<endl;
	for(int i=0;i<q;i++)
	{
		int x=b[i][0];
		int y=b[i][1];
		int z=b[i][2];
		if(x==0)
		{
			cout<<"x=0"<<endl;
			ans.push_back(query(0,n-1,0,y-1,z-1,tree));
		}
		else if(x==1)
		{
			cout<<"x=1"<<endl;

			cout<<"tree is "<<endl;
			for(int i=0;i<tree.size();i++)
				cout<<tree[i]<<" ";
			cout<<endl;
			if(a[y-1]=='0'){
				cout<<"needs updation"<<endl;
				update(0,n-1,0,y-1,tree);

			}
			ans.push_back(-1);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	// cout<<power(2,5)<<endl;
	// cout<<power(2,6)<<endl;
	// cout<<power(2,7)<<endl;
	// cout<<power(2,8)<<endl;
	
	// cout<<power(3,2)<<endl;
	// cout<<power(3,3)<<endl;
	// cout<<power(3,4)<<endl;

}