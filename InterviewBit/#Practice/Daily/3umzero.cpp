#include<bits/stdc++.h>
using namespace std;
int main()
{
	int z;
	int n;
	cin>>n;
	std::vector<int> v(n);
	std::vector<vector<int> > ans;
	set<std::vector<int> > set;
	for(int i=0;i<n;i++)
		cin>>v[i];	
	sort(v.begin(),v.end());
	for(int k=0;k<n;k++)
	{
		long long int x=(-1)*v[k];
		long long int s=0;
			int i=0;
			int j=n-1;
		cout<<"inside for "<<x<<endl;

		vector<int> temp;
		while(i<j)
		{
			s=v[i]+v[j];
					cout<<"inside while "<<s<<endl;
					cout<<"i is "<<i<<"j is "<<j<<endl;
					// cin>>z;
			if(s==x)
			{
				if(k!=i && k!=j)
				{
					int a=min(v[i],min(v[j],v[k]));
					temp.push_back(a);
					if(v[i]==a)
					{
						if(v[j]<v[k])
							{
								temp.push_back(v[j]);
								temp.push_back(v[k]);
							}
							else
							{
								temp.push_back(v[k]);
								temp.push_back(v[j]);
							}
					} 
					else if(v[j]==a)
					{
						if(v[i]<v[k])
							{
								temp.push_back(v[i]);
								temp.push_back(v[k]);
							}
							else
							{
								temp.push_back(v[i]);
								temp.push_back(v[j]);
							}
					}
					else if(v[k]==a)
					{
						if(v[j]<v[i])
							{
								temp.push_back(v[j]);
								temp.push_back(v[i]);
							}
							else
							{
								temp.push_back(v[i]);
								temp.push_back(v[j]);
							}
					}
					cout<<"temp is "<<endl;
					// cin>>z;
					for(int l=0;l<3;l++)
						cout<<temp[l]<<" ";
					cout<<endl;
					set.insert(temp);
					temp.clear();
					// break;
				}
				// else
					// break;
			}
			//else
			//{
				if(x<s)
				{
					j--;
				}
				else
					i++;
			//}
		}
	}
	// ans.unique(v.begin(),v.end());
	for(auto it=set.begin();it!=set.end();it++)
	{
		ans.push_back(*(it));
	}
	cout<<"fin"<<endl;
	for(int i=0;i<ans.size();i++)
	{
		// cout<<"size of  v;"<<endl;
		// cout<<ans[i].size()<<endl;
		for(int j=0;j<ans[i].size();j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
}