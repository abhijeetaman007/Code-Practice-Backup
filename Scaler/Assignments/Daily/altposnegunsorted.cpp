#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int pos=0,neg=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]<0)
			neg++;
		else
			pos++;
	}
	cout<<"pos "<<pos<<"neg "<<neg<<endl;
	int i=0,sign=-1,temp;
	while(pos!=0 && neg!=0)
	{
		cout<<"for v[i] "<<v[i]<<endl;
		if(sign<0)
		{
			cout<<"inside"<<endl;
			if(v[i]<0){
				neg--;
				sign=sign*(-1);
				i++;
				continue;

			}
			else
			{
				for(int j=i+1;j<n;j++)
				{
					if(v[j]<0)
					{
						cout<<"v[j] found "<<v[j]<<endl;
						temp=v[j];
						for(int k=j;k>i;k--)
						{
							v[k]=v[k-1];
						}
							break;
					}

				}
				v[i]=temp;
				neg--;
			}
		}
		else
		{
			if(v[i]>=0)
			{
				pos--;
				sign=sign*(-1);
				i++;
				continue;
			}
			else
			{
				for(int j=i+1;j<n;j++)
				{
					if(v[j]>=0)
					{
						cout<<"v[j] found "<<v[j]<<endl;
						temp=v[j];
						for(int k=j;k>i;k--)
						{
							v[k]=v[k-1];
						}
							break;
					}
				}
				v[i]=temp;
				pos--;
			}
		}
		i++;
		sign=sign*(-1);
	}
	for(i=0;i<n;i++)
		cout<<v[i]<<" ";
}