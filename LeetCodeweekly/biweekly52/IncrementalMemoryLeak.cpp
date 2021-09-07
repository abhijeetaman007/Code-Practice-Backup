#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<< " " <<x<<endl;
int main()
{
	int m1,m2;
	cin>>m1>>m2;
	int i=1;
	while(1)
	{
		deb(m1);
		deb(m2);
		if(i>m1 && i>m2)
		{
			break;
		}
		else
		{
			if(m1==m2)
			{
				m1=m1-i;
			}
			else
			{
				if(m1>m2)
				{
					m1=m1-i;
				}
				else
				{
					m2=m2-i;
				}
			}
			i++;
		}
	}
	cout<<"sec "<<i<<" m1 "<<m1<<" m2 "<<m2<<endl;
}