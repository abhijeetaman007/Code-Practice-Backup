#include<bits/stdc++.h>
using namespace std;
string rev(string str,int l,int h)
{
	cout<<"inside rev str is "<<str<<" l "<<l<<" h "<<h<<endl;
	string temp=str;
	int x=l;
	int y=h;
	for(int i=l;i<=((l+h)/2);i++)
	{
		swap(temp[x],temp[y]);
		x++;
		y--;
	}
	cout<<"temp is "<<temp<<endl;
	return temp;

}




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
			set<string>ST;
			int k=0;
			int j=i;
			int one=0;
			set<string> s;
			// cout<<"i is "<<i<<endl;	
			while(j<n)          //Getting substrings
			{
				// cout<<"k is "<<k<<" j	 is "<<j<<endl;
				set<string> st;
				string sub="\0";
				for(int l=k;l<=j;l++)
				{
					sub=sub+str[l];
				}
				cout<<"sub is "<<sub<<endl;
				int n1=sub.size();
				int flag=0;
				if(n1>=3) //Processing substring
				{
					
					for(int p=2;p<n1;p++)
					{
						one=0;
						for(int l=0;l<=p;l++)
						{
							if(sub[l]=='1')
							{
								one++;
							}
						}
						int l=0;
						int h=p;
						while(h<n1)
						{
							cout<<"l is "<<l<<"h is "<<h<<endl;
							cout<<"one is "<<one<<endl;
							if(one%2==0 && one!=0)
							{
								string z=rev(sub,l,h);
								st.insert(z);
								if(s.find(z)!=s.end())
								{
									if(st.find(z)!=st.end())
									flag=1;
									break;
								}
							}
							h++;
							if(sub[h]=='1' && h<n1)
								one++;
							if(sub[l]=='1')
								one--;
							l++;
						}
						if(flag==1)
							break;
					}
					if(flag!=1)
					{if(s.find(sub)==s.end())				
						{
							s.insert(sub);
							cout<<"inserted"<<endl;
						}
					}
				}
				else
				{
					if(s.find(sub)==s.end()){
						s.insert(sub);
						cout<<"INSETED"<<endl;
					}
				}
				j++;
				k++;
				// cout<<"temp is "<<temp<<endl;				
			}
				ans=ans+s.size();
				cout<<"updated ans "<<ans<<endl;
		}
		cout<<"Final ans is "<<ans<<endl;
	}
}