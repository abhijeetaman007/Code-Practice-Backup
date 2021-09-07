#include<bits/stdc++.h>
using namespace std;
int res=0;
void merge(int l,int r,int m,vector<int> &v)
{
	// cout<<"inside merge"<<endl;
	cout<<"inside merge"<<l<<r<<m<<endl;	
	int x;
	cin>>x;
	int n1=m-l+1;
	int n2=r-m;
	vector<int> L(n1),R(n2);

	for(int i=0;i<n1;i++)
		L[i]=v[l+i];
	for(int i=0;i<n2;i++)
		R[i]=v[m+i+1];
	cout<<endl<<"Left"<<endl;
	for(int i=0;i<n1;i++)
		cout<<L[i]<<" ";
	cout<<endl<<"Right"<<endl;
	for(int i=0;i<n2;i++)
		cout<<R[i]<<" ";
	cout<<endl;


	int i=0,j=0,k=l;

	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			v[k]=L[i];
			i++;
		}
		// (R[j]<L[i])
		else
		{
			v[k]=R[j];
			j++;
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
		v[k]=R[j];
		j++;
		k++;
	}
	cout<<"l to r after merging"<<endl;
	for(i=l;i<=r;i++)
		cout<<v[i]<<" ";
	cout<<endl;

}

void mergesort(int l,int r,vector<int> &v)
{
		int m=(l+r)/2;
		cout<<"inside"<<endl;
		cout<<l<<r<<m<<endl;
	if(l<r)
	{
		int x;
		
		cin>>x;
		mergesort(l,m,v);
		mergesort(m+1,r,v);
		merge(l,r,m,v);
	}
	// return;
		
}




int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	mergesort(0,n-1,v);
	cout<<"Ans is "<<res<<endl;
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";

}