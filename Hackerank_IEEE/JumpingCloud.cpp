#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int pos=0,c=0;
	while(pos!=(n-1))
	{
		// cout<<"inside while"<<endl;
		// cout<<pos<<endl;
		if(pos<=n-1)
		{
			if((pos+2)<=n-1)
			{
				if(v[pos+2]!=1)
				{
					pos=pos+2;
					c+=1;
					continue;
				}
				else{
					pos=pos+1;
					c+=1;
					continue;
				}
			}
			else{
					pos=pos+1;
					c+=1;
					continue;
				}
			
			if((n-1)-pos==1)
			{
				pos=pos+1;
				c+=1;
				continue;
			}
			

		}

	}
	cout<<c<<endl;

}