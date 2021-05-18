//Partailly Correct Solution ---10 pts
#include<bits/stdc++.h>
using namespace std;
string rev(string str,int l,int h)
{
	string temp=str;
	int x=l;
	int y=h;
	for(int i=l;i<=((l+h)/2);i++)
	{
		swap(temp[x],temp[y]);
		x++;
		y--;
	}
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
			while(j<n)          //Getting substrings
			{
				set<string> st;				
				string sub="\0";
				for(int l=k;l<=j;l++)
				{
					sub=sub+str[l];
				}
				int n1=sub.size();
				int flag=0;
				if(n1>=3) //Processing substring
				{
					// set<string> st;
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
							if(one%2==0 && one!=0)
							{
								string z=rev(sub,l,h);
								st.insert(z);
								string u=z;
								reverse(u.begin(),u.end());
								if(s.find(z)!=s.end() || ST.find(z)!=ST.end())
								{
									flag=1;
									break;
								}
								int o=0;
								for(int w=0;w<u.size();w++)
								{
									if(u[w]=='1')
										o++;
								}
								if(o%2==0 && o!=0)
								{
									st.insert(u);
								}
								if(s.find(u)!=s.end() && o%2==0 && o!=0)
								{
									if(ST.find(u)!=ST.end())
									{
										flag=1;
										break;	
									}									
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
					{
						s.insert(sub);
						// ST.insert({st});
						for(auto it=st.begin();it!=st.end();it++)
						{
							ST.insert(*it);
						}
					}
				}
				else
				{
					if(s.find(sub)==s.end()){
						s.insert(sub);	
					}
				}
				j++;
				k++;
			}
				ans=ans+s.size();
		}
		cout<<ans<<endl;
	}
}