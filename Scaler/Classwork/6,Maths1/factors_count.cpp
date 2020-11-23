#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int fact_count=0;
	int n;
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		if(i*i==n){
			fact_count+=1;
			continue;
		}
		if(n%i==0)
		{
			fact_count+=2;
		}
	}
	cout<<"fact_count is "<<fact_count<<endl;
}