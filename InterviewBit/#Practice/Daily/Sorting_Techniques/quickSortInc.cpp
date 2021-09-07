#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int start,int end)
{
	// cout<<"partition"<<endl;
	int p_index=start;
	int pivot=v[end];
	for(int i=start;i<end;i++)
	{
		if(v[i]<=pivot)
		{
			swap(v[i],v[p_index]);
			p_index++;
		}
	}
	swap(v[p_index],v[end]);
	// cout<<v[p_index]<<endl;
	return p_index;
}



void quicksort(vector<int> &v,int start,int end)
{
	// cout<<"inside"<<endl;
	if(start<end)
	{
		int p_index=partition(v,start,end);
		quicksort(v,start,p_index-1);
		quicksort(v,p_index+1,end);
	}
	else
	return;	
}




int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	quicksort(v,0,n-1);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";

}