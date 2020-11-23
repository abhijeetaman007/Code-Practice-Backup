#include<bits/stdc++.h>
using namespace std;
void insertionsort(int i,int j,vector<int> &v,int key)
{
	if(i==v.size()){
		return;
	}
	else
	{
		if(j==0){
			v[j]=key;
			return insertionsort(i+1,i+1,v,v[i+1]);
		}
		else{
			if(v[j-1]>key)
			{
				v[j]=v[j-1];
				return insertionsort(i,j-1,v,key);
			}
			else
			{
				v[j]=key;
				return insertionsort(i+1,i+1,v,v[i+1]);
			}
		}
	}
}



int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	insertionsort(1,1,v,v[1]);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
}