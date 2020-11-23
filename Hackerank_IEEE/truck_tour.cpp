// https://www.hackerrank.com/challenges/truck-tour/problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v1,v2;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	int pos;
	int count=0;
	int i=0;
	while(count<=n)
	{		
		// cout<<"Inside first while"<<endl;
		 count=0;
		 pos=i%n;
		 if(v1[pos]>=v2[pos])
		 {	
		 	int s=0;
		 	int j=pos;
		 	int p=j;
		 	while(count<=n)
		 	{
		 		// cout<<"Inside Second while"<<endl;
		 		if(s>=0)
		 		{
		 			s=s+(v1[p]-v2[p]);
		 			j=j+1;
		 			p=j%n;
		 			count+=1;
		 		}
		 		else
		 			break;
		 	}
		 }
		 i=i+1;
	}
	cout<<pos<<endl;
}