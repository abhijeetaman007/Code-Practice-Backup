#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque <int> v;
	int k,n,a;
	cin>>k>>n;
	int count=0,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	while(count!=k)
	{
		if(v.front()>v.back())
		{
			sum+=v.front();
			// cout<<"Sum is "<<sum<<endl;
			v.pop_front();
			count+=1;
		}
		else{
			if(v.back()>v.front())
			{
				sum+=v.back();
				// cout<<"Sum is "<<sum<<endl;
				v.pop_back();
				count+=1;
			}
			else
			{
					int flag=0;	
					deque<int> v1;				
				if(v.front()==v.back())
				{
					v1=v;
					while(v.front()==v.back())
					{
						v.pop_front();
						v.pop_back();
						if(v.front()>v.back())
						{
							flag=1;
							break;
						}
						if(v.front()<v.back())
						{
							flag=2;
							break;
						}
					}
						v=v1;
					if(flag==1)
					{
						sum+=v.front();
						// cout<<"Sum is "<<sum<<endl;
						v.pop_front();
						count+=1;								
					}
					if(flag==2)
					{
						sum+=v.back();
						// cout<<"Sum is "<<sum<<endl;
						v.pop_back();
						count+=1;
					}
				}
			}
		}
					
	}
	
	cout<<sum<<endl;

}