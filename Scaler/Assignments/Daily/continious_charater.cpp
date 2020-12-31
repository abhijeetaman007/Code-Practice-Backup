#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b;
	string str,s;
	cin>>str>>s;
	cin>>b;
	int i=0;
	int j=0;
	int n=str.size();
	cout<<"size is "<<n<<endl;
	int ans=0;
	int t=b,x;
	int temp;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(str[i]==s[0])
			v.push_back(i);
	}
	int k=1;
	while(j<n && i<n)
	{
		cout<<"inside"<<endl;
		cout<<j<<" "<<i<<endl;
		if(str[j]==s[0]){
			temp=j;
			j++;
		}
		else
		{
			if(b>0)
			{
				b--;
				// temp=j;
				j++;
			}
			else
			{
				i=v[k];
				j=i;
				b=t;
				k++;
				// if(ans<j-i+1)
				// ans=j-i+1;
			}
		}
		cin>>x;
		if(ans<j-i)
			ans=j-i;
	}
	cout<<ans<<endl;
}