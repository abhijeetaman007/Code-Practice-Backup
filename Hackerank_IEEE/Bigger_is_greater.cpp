//https://www.hackerrank.com/challenges/bigger-is-greater/problem?h_r=internal-search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,str;
		cin>>s;
		str=s;
		string t;
		int count=0;
		int flag=0,f=0;

		for(int i=s.size()-1;i>0;i--)
		{
			count=count+1;
			if(s[i-1]>=s[i])
			{
				continue;
			}
			else
			{
				i=i-1;
				f=1;
				for(int j=s.size()-1;j!=i;j--)
				{
					//cout<<"s[i] is "<<s[i]<<" s[j] is "<<s[j]<<endl;
					if(s[i]>=s[j])
					{
						continue;
					}
					else
					{
						if(flag!=1)
						{
							//cout<<"element found to be swapped "<<s[j]<<" "<<s[i]<<endl;
							char temp;
							temp=s[j];
							s[j]=s[i];
							s[i]=temp;
							flag=1;	
						}
						break;
					}
				}
				break;
			}
		}
		if(f==1)
		{
			//cout<<s<<endl;
			//cout<<"count is"<<count<<endl;
			reverse(s.end()-count,s.end());
			cout<<s<<endl;	
		}
		else
			cout<<"no answer"<<endl;
	}
}