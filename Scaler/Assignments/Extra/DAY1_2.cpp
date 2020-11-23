#include<bits/stdc++.h>
using namespace std;
#define m 1000000007;
int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	// int x;
	// vector<int> A;
	// for(int i=0;i<n;i++)
	// {
	// 	cin>>x;
	// 	A.push_back(x);
	// }
	// long long int a=0,b=0,c;
 //    for(int i=0;i<A.size();i++)
 //    {
 //        if(A[i]<0)
 //        {
 //            a+=A[i];
 //        }
 //        else
 //        {
 //            b+=A[i];
 //        }
 //    }
 //    c=pow(a,2)+pow(b,2);
 //    cout<<c%1000000007<<endl;
		int i = 1;
		i = (i*a) % m;    // i = 508086243
		i = (i*b) % m;    // i = 144702857
		i = (i*c) % m;
		cout<<i<<endl; 
}