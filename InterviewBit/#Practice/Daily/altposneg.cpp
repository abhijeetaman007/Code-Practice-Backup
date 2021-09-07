#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int neg=0,pos=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]<0){
			neg++;
		}
		else
			pos++;
	}
	cout<<pos<<" "<<neg<<endl;
	if(neg==0 || pos==0)
	{
		if(pos==0)
		{
			sort(v.begin(),v.end(),greater<int>());
		}
		else
		{
			sort(v.begin(),v.end());
		}
	}
	else
	{
		int sign=-1;
		int min=INT_MAX;
		int min_index;
		for(int i=0;i<n;i++)
		{
			cout<<"i is "<<i<<endl;
			cout<<"for v[i] "<<v[i]<<endl;
			int t;
			cin>>t;
			int flag=0;
			if(sign<0)
			{
				if(neg!=0)
				{
					min=v[i];	
					for(int j=i;j<n;j++)
					{
						cout<<"for v[j] "<<v[j]<<endl;
						cin>>t;
							if(v[j]<0)
						{
							if(flag==0)
							{
								min=v[j];
								min_index=j;
									cout<<"updated min "<<v[min_index]<<endl;
								flag=1;
							}
							else{
									if(abs(v[j])<=abs(min))
								{
									min_index=j;
									// cout<<"updated min "<<v[min_index]<<endl;
									cout<<"updated min "<<v[min_index]<<endl;
								}
							}
						}
					}
					swap(v[i],v[min_index]);
					cout<<"now v[i] is "<<v[i]<<endl;
				}
				else
					i=i-1;
				sign=sign*(-1);
				neg=neg-1;
			}
			else
			{
				if(pos!=0){
					// min=v[i];
					cout<<"for v[i] +ve "<<v[i]<<endl;		
					for(int j=i;j<n;j++)
					{
						cout<<"for v[j] +ve "<<v[j]<<endl;		
						if(v[j]>0)
						{
							if(flag==0)
								{
									min=v[j];
									min_index=j;
									cout<<"updated min "<<v[min_index]<<endl;
									flag=1;
								}
								else{
									if(abs(v[j])<=abs(min))
								{
									min_index=j;
									cout<<"updated min from +ve "<<v[min_index]<<endl;
								}
							}
						}
					}
					swap(v[i],v[min_index]);
					cout<<"now v[i] is "<<v[i]<<endl;
				}
				else
					i=i-1;
				sign=sign*(-1);
				pos=pos-1;
			}
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}