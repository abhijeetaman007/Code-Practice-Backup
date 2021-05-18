#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,tax;
	cin>>a;
	if(a<200000)
	{
		cout<<0<<endl;
	}
	else
	{
		if(a<800000)
		{
			tax=((a-200000)*(10))/100;
			cout<<tax<<endl;
		}
		else
		{
			if(a<1800000)
			{
				tax=((600000*10)+(a-800000)*20)/100;
				cout<<tax<<endl;
			}
			else
			{
				tax=((600000*10)+(1000000*20)+(a-1800000)*25)/100;
				cout<<tax<<endl;
			}
		}
	}

}