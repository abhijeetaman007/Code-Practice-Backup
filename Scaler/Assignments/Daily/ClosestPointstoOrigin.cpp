#include<bits/stdc++.h>
using namespace std;
bool compare(vector<int> a,vector<int> b){
	long long int x=a[0]*a[0]+a[1]*a[1];
	x=sqrt(x);
	long long int y=b[0]*b[0]+b[1]*b[1];
	y=sqrt(y);
	return x<y;
}
int main()
{
	int n,a;
	cin>>n;
	vector<vector<int> >v(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a;
			v[i].push_back(a);
		}
	}
	sort(v.begin(),v.end(),compare);
	long long int d= sqrt(v[0][0]*v[0][0]+v[0][1]*v[0][1]);
	vector<vector<int> >ans;
	for(int i=0;i<v.size();i++)
	{
		int d1=sqrt(v[i][0]*v[i][0]+v[i][1]*v[i][1]);
		// cout<<d1<<" "<<d<<endl;
		 if(d==d1)
		 {
		 	// cout<<"inside"<<endl;
		 	ans.push_back(v[i]);
		 }
		 else
		 	break;
	}
	// cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<v[i][0]<<" "<<v[i][1]<<endl;
	}
}