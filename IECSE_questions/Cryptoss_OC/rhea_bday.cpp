#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,z,sum=0,x;
		cin>>a>>z;
		vector<int> v(a);
		vector<bool> flag(a,false);
		for(long long int i=0;i<a;i++)
		{	
			cin>>x;
			v[i]=x;
			sum=sum+x;
		}
		double y=(double)(sum)/z;
		if(y==ceil(y)){
			if(a==z)
			{
				int f=0;
				for(int i=0;i<a;i++)
				{
					if(v[i]!=y)
					{
						f=1;
						break;
					}
				}
				if(f==1)
					cout<<"no"<<endl;
				else
					cout<<"yes"<<endl;
			}
			else
			{
				if(a<z)
					cout<<"no"<<endl;
				else{
					int f=0;
					for(int i=0;i<a;i++)
					{
						if(v[i]>y)
						{
							f=1;
							break;
						}
					}
					if(f==1)
						cout<<"no"<<endl;
					else{


						sort(v.begin(),v.end());
						int h=0;
						for(int i=0;i<a;i++)
						{
							// int sum=y;
							int diff=y-v[i];
							for(int j=i+1;j<a;j++)
							{
								if(diff>v[i])
									diff=diff-y;
							}
							if(diff!=0)
							{
								h=1;
								break;
							}
						}
						if(h==1)
							cout<<"no"<<endl;
						else
							cout<<"yes"<<endl;





						// int flag=0;
						// for(int i=0;i<a-1;i++)
						// {
						// 	if(v[i]!=v[i+1])
						// 	{
						// 		flag=1;
						// 		break;
						// 	}
						// }
						// if(flag==1)
						// cout<<"yes"<<endl;
						// else
						// {
						// 	if(v[0]==y)
						// 		cout<<"yes"<<endl;
						// 	else
						// 		cout<<"no"<<endl;

						// }
					}
				}
			}
		}
		else
			cout<<"no"<<endl;
	}
}