#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("/home/abhijeet/AMAN/Code/program_cpp/Scaler/Assignments/Daily/input/input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
	string s;
	cin>>s;
	int a,b;
	cin>>a>>b;
	cout<<"Input taken"<<endl;
	bool ans=false;
	if(s.back()=='1')
		cout<<false<<endl;
	else
	{
		int c=0;
		queue<int> q;
		q.push(0);
		int n=s.size();
		if(q.front()==s.size()-1)
		{
			ans=true;

		}
		else
		{
			int maxReach=0;
			while(!q.empty()) 
			{
				c++;
				cout<<"in"<<endl;
				cout<<"maxReach "<<maxReach<<endl;
				cout<<"string size"<<n<<endl;
				int curr=q.front();
				if(curr==s.size()-1)
				{
					ans=true;
					break;
				}
				if(maxReach==n-1)
				{
					cout<<"final"<<endl;
					ans=false;
					break;
				}
				q.pop();
				int st=max(curr+a,maxReach+1);
				int end=min(n-1,curr+b);
				cout<<"Start is "<<st<<endl;
				cout<<"End is "<<end<<endl;
				for(int i=st;i<=end;i++)
				{
					c++;
						maxReach=max(maxReach,i);
					
					if(s[i]=='0')
					{
						if(i==n-1)
						{
							ans=true;
							break;
						}
						q.push(i);
					}		
				}
			}
		}
		cout<<"ans is "<<ans<<endl;
		cout<<"Total count is "<<c<<endl;
	}

}