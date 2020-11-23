#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int start,int end)
{	
	int p_index=start;
	int pivot=v[end];
	cout<<"pivot is "<<pivot<<endl;
	for(int i=start;i<end;i++)
	{
		if(v[i]<=pivot)
		{
			swap(v[p_index],v[i]);
			p_index++;

		}
	}
	swap(v[p_index],v[end]);
	cout<<pivot<<" "<<p_index<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return p_index;
}

void quicksort(vector<int> &v,int start,int end)
{
	if(start<end)
	{
		int p_index=partition(v,start,end);
		quicksort(v,start,p_index-1);
		quicksort(v,p_index+1,end);
	}	
	return;
}




int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	// v={3,1,5,2,4};
	for(int i=0;i<n;i++)
		cin>>v[i];
	quicksort(v,0,n-1);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}