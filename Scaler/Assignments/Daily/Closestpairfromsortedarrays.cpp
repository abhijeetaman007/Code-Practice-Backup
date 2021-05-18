#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	std::vector<int> a(n1),b(n2);
	for(int i=0;i<n1;i++)
		cin>>a[i];
	for(int i=0;i<n2;i++)
		cin>>b[i];
	int c;
	cin>>c;
	int i=0;
	int j=n2-1;
	int diff=INT_MAX;
	int i1=INT_MAX,j1=INT_MAX;
	while(i<n1 && j>=0)
	{
		if(abs(a[i]+b[j]-c)<=diff)
		{

			if(abs(a[i]+b[j]-c)==diff){
			if(i1>i)
			{
				diff=abs(a[i]+b[j]-c);
				i1=i;
				j1=j;
			}
			else
			{
				if(i1==i && j1>j)
				{
					diff=abs(a[i]+b[j]-c);
					i1=i;
					j1=j;
				}
			}
		}
		else
		{	
			diff=abs(a[i]+b[j]-c);
					i1=i;
					j1=j;
		}
		}

		if((a[i]+b[j])>c)
		{
			j--;
		}
		else
			i++;
	}
	cout<<diff<<endl;
	cout<<a[i1]<<" "<<b[j1]<<endl;
}