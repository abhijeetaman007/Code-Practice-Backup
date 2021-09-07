#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
	string s;
	cin>>s;
	// int sum=0;
	// int s1=0;
	// for(int i=0;i<s.size();i++)
	// {
	// 	if(s[i]=='x')
	// 	{
	// 		sum+=i;
	// 		s1+=1;
	// 	}
	// }

	// // if(s1!=0)
	// // int pos=sum/s1;

	// 	double p=(double)sum/s1;
	// 	int pos=llround(p);


	vector<int> v;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='x')
		{
            v.push_back(i);
		}
	}

	if(v.size()==0)
	return 0;
	int pos;
	if(v.size()%2==0)
	{
	    if(v.size()==1)
	    {
	        pos=0;
	    }
	    else
	    {
	       int i=(v.size()-1)/2;
	        pos=(v[i]+v[i+1])/2;
	    }
	}
	else
	{
	    pos=v[(v.size()/2)];
	}




	int l,r,ans=0;
	l=r=pos;
	cout<<s.size()<<endl;
	cout<<"pos is "<<pos<<endl;
	while(s[l]!='.')
	{
		l=l-1;
	}
	int j=l;
	while(j>=0)
	{
		if(s[j]=='x')
		{
			swap(s[j],s[l]);
			ans=ans+abs(l-j);
			l=l-1;
		}
		j--;
	}
	while(s[r]!='.')
	{
		r=r+1;
	}
	j=r;
	while(j<s.size())
	{
		if(s[j]=='x')
		{
			swap(s[j],s[r]);
			ans=ans+abs(r-j);
			r=r+1;
		}
		j++;
	}
	cout<<s<<endl;
	cout<<ans<<endl;
}