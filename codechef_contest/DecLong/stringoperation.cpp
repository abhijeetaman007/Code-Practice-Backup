#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.size();
		long long int ans=0;
		for(int i=0;i<n;i++)
		{
			int k=0;
			int j=i;
			int one=0;
			for(int l=0;l<=j;l++)
			{
				if(str[l]=='1')
				{
					one++;
				}
			}
			set<string> s;
			// cout<<"i is "<<i<<endl;	
			while(j<n)
			{
				// cout<<"k is "<<k<<" j	 is "<<j<<endl;
				// string temp=str.substr(k,j);
				string temp="\0";
				for(int l=k;l<=j;l++)
				{
					temp=temp+str[l];
				}

				// cout<<"temp is "<<temp<<endl;
				if(s.find(temp)==s.end())
				{
					if(one%2!=0)
						s.insert(temp);
					else
					{
						string x=temp;
						reverse(x.begin(),x.end());
						if(s.find(x)==s.end())
							s.insert(temp);
					}
				}
				if(str[k]=='1'){
					one--;
				}
				k++;
				j++;
				if(str[j]=='1'&&j<n)
					one++;
			}
				ans=ans+s.size();
		}
		cout<<ans<<endl;
	}
}