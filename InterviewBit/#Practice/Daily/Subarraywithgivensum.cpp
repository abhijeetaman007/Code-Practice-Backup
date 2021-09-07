#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int k;
	cin>>k;
	long long int sum=v[0];
	int i=0;int j=0;int flag=0;
	while(j<n)
	{
		if(sum==k)
		{
			flag=1;
			break;
		}
		else
		{
			if(i>j)
			{
				sum=v[i];
				j=i;
			}
			if(sum<k)
			{
				j++;
				sum=sum+v[j];
			}
			else
			{
				sum=sum-v[i];		
				i++;
			}
		}
	}
	if(flag==0)
	{
		cout<<-1;
		return 0;
	}
	for(int l=i;l<=j;l++)
		cout<<v[l]<<" ";
}