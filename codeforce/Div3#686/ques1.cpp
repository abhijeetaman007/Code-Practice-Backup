#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    int a=v[0];
    long long int ans=0;
    int flag=0;
    cout<<"test"<<endl;
    for(int i=1;i<n;i++)
    {
    	cout<<v[i]<<endl;
    	if(v[i]==a)
    	{
    		if(flag==1){
    			ans=ans+1;
    		}
    			flag=0;
    		 		
    	}
    	else
    		flag=1;
    	cout<<"Ans is "<<ans<<endl;
    }
    if(flag==1)
    	ans=ans+1;
    cout<<ans<<endl;
}
}