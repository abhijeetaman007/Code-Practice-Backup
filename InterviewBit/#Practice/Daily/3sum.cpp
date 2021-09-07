#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(), v.end());
	int diff=INT_MAX;
		int a,b,c;
		int B;
		cin>>B;
	for(int k=0;k<n;k++)
	{
		int i=0;
		int j=n-1;
		cout<<"inside for "<<v[k]<<endl;
		while(i<j)
		{
		cout<<"inside while i is "<<i<<" j is "<<j<<endl;	
			if(k!=i && k!=j)
			{
				cout<<"inside if"<<endl;
				if(abs((long long int)v[k]+v[i]+v[j]-B)<diff){
					diff=abs((long long int)v[k]+v[i]+v[j]-B);
					a=v[i];
					b=v[j];
					c=v[k];
				}
			}
			if(((long long int)v[k]+v[i]+v[j]-B)>0)
			{
				j--;
			}
			else
				i++;

		}
	}
	cout<<a<<"  "<<b<<"  "<<c<<endl;
	int ans=a+b+c;
	cout<<(ans)<<endl;
}