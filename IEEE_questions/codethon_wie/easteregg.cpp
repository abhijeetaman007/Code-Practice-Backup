#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n),freq(5);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		freq[v[i]-1]++;
	}
	int max=-1,idx=-1;
	for(int i=0;i<freq.size();i++)
	{
		if(freq[i]>=max ){
			if(freq[i]==max)
			{
				if(i<idx)
				{
					idx=i;
				}
			}
			else
			{
				max=freq[i];
				idx=i;
			}
		}
	}
	cout<<idx+1<<endl;

}