#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;
    for(unsigned long long int i=1;i<=n;i++)
    {
    	cout<<"hello";
        unsigned long long int x=sqrt(i);
    	cout<<"hdsfello";
        x=(x%1000000007*x%1000000007)%1000000007;
        if(i%1000000007==x)
        c+=1;
    }
    return c;
}