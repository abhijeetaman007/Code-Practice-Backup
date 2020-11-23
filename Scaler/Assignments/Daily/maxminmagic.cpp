#include<bits/stdc++.h>
using namespace std;
int part(std::vector<int> &v,int start,int end)
{
	int p=start;
	for(int i=start;i<end;i++)
	{
		if(v[i]<=v[end]){
			swap(v[i],v[p]);
			p++;
		}

	}
	swap(v[end],v[p]);
	return p;
}




void quicksort(std::vector<int> &v,int start,int end)
{
	if(start<end)
	{
		int p=part(v,start,end);
		quicksort(v,start,p-1);
		quicksort(v,p+1,end);
	}
}



int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	quicksort(v,0,n-1);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	int max=0,min=0;
	int j=n-1;
	for(int i=0;i<n/2;i++)
	{
		max=max+abs(v[i]-v[j]);
		j--;
	}
	for(int i=0;i<n;i=i+2)
	{
		min=min+abs(v[i]-v[i+1]);
	}
	cout<<"Ans is "<<max<<" "<<min<<endl;
}