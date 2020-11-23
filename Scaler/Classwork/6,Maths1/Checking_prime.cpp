#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool prime_check=true;
	if(n<=1)
	{
		cout<<"Number is not a prime number"<<endl;
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			prime_check=false;
			break;			
		}
	}
	if(prime_check)
		cout<<"Number is prime number";
	else
		cout<<"Number is not a prime number";
}	