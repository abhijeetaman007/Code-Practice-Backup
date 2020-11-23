#include<bits/stdc++.h>
using namespace std;
int res=0;
void merge(int l,int r,int m,vector<int> &v)
{
	int n1=m-l+1;
	int n2=r-m;
	vector<int> L(n1),R(n2);
	for(int i=0;i<n1;i++)
		L[i]=v[l+i];
	for(int i=0;i<n2;i++)
		R[i]=v[m+i+1];
	cout<<l<<r<<m<<endl;
	int i=0,j=0,k=l;
	// int y;
	// cin>>y;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			v[k]=L[i];
			i++;
		}
		else 
		{
			cout<<"inc"<<endl;
			// cout<<R[j]<<endl;
			// cout<<n1-i<<endl;
			v[k]=R[j];
			j++;
			// cout<<n1<<endl;
			// int x=i;
			// while(x<n1){
				// cout<<"Pair is "<<L[x]<<" "<<R[j]<<endl;
				// x++;
			// }
			res=res+(n1-i);
			cout<<"res is"<<res<<endl;

		}
		k++;
	}
	while(i<n1)
	{
		v[k]=L[i];
			i++;
			k++;
	}
	while(j<n2)
	{
			// cout<<"inc"<<endl;

			v[k]=R[j];
			j++;
			k++;
			// res=res+(n1-1-i);
	}
	// return;

}



void mergesort(int l,int r,vector<int> &v)
{
	int m=(l+r)/2;
	if(l<r)
	{
		mergesort(l,m,v);
		mergesort(m+1,r,v);
		merge(l,r,m,v);
	}
	return;
}
	


int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<"TEST"<<endl;
	mergesort(0,n-1,v);
	cout<<"Ans is "<<res<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}