#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	vector<int> d(n);
	vector<int> flag(n,false);
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
	}
	long long int c=0;
	for(int i=0;i<n;i++)
	{
		int j=min(i,d[i]);
		int k=1;
		while(j--)
		{
			if(flag[i-k]!=true){
				flag[i-k]=true;
				c=c+1;
			}
			k++;
		}
	}
	cout<<n-c<<endl;
}