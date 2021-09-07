#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("/home/abhijeet/AMAN/Code/program_cpp/QuesMaking/input.txt", "r", stdin);
    freopen("/home/abhijeet/AMAN/Code/program_cpp/QuesMaking/output.txt", "w", stdout);
    #endif
	int t;
	cin>>t;
	cout<<t<<endl;
	while(t--)
	{
		//Input
		int n;
		cin>>n;
		vector<int> encrypted(n);
		for(int i=0;i<n;i++)
			cin>>encrypted[i];
		//Main Logic
		vector<int> ans;
        for(int i=0;i<encrypted.size()-1;i++)
            ans.push_back(encrypted[i]^encrypted[i+1]);
        //Output
        cout<<ans.size()<<" "<<encrypted[0]<<endl;
        for(int i=0;i<ans.size();i++)
        	cout<<ans[i]<<" ";
        cout<<endl;
	}
}