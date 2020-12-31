#include<bits/stdc++.h>
using namespace std;
int main()
{
	int key;
	cin>>key;
	key=key+1;
	int a=1;
		vector<int> v;
	if(key==1){
		v.push_back(1);
	}
	else if(key==2)
	{
		v.push_back(1);
		v.push_back(1);

	}
	else
	{
		v.push_back(1);
		v.push_back(2);
		v.push_back(1);

		for(int k=3;k<key;k++)
		{
		
			v.push_back(1);
			int n=v.size();
			int i=n-2;
			int j=n-3;
			int l=1;
			while(j>=(n-1)/2)
			{
				v[l]=v[i]+v[j];
				i--;
				j--;
				l++;
			}
			if((n%2)==0)
			{
				int x=(n-1)/2;
				for(i=((n-1)/2)+1;i<n;i++)
				{
					v[i]=v[x];
					x--;
				}
			}
			else
			{
				v[(n-1)/2]=2*(v[(n-1)/2]);
				int x=(n-1)/2;
				x=x-1;
				for(i=((n-1)/2)+1;i<v.size()-1;i++)
				{
					v[i]=v[x];
					x--;
				}
			}
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
} 	