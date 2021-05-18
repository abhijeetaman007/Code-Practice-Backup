#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int nax=1e5+7;

ll a[nax]={0},n;
ll dp[nax][3];

vector<int> v;

int main(){

	cin>>n;

	for (int i=0;i<n;++i) cin>>a[i];

	if (n==1||n==2) {
		cout<<0<<"\n";
		return 0;
	}

	for (int i=0;i<n;++i){
		for (int j=-1;j<=1;++j){
			dp[i][j+1]=INT_MAX;
		}
	}

	for (int i=-1;i<=1;++i) dp[0][i+1]=(i!=0);

	for (int i=-1;i<=1;++i){
		for (int j=-1;j<=1;++j){
			v.push_back(a[1]+j-a[0]-i);
		}
	}

//	for (auto s :v) cout<<s<<" ";
//	cout<<"\n";

	ll res=INT_MAX;

	for (auto s :v){
		for (int i=0;i<n;++i){
			for (int j=-1;j<=1;++j){
				dp[i][j+1]=INT_MAX;
			}
		}

		for (int i=-1;i<=1;++i) dp[0][i+1]=(i!=0);


		//cout<<s<<" start: \n";
		for (int i=1;i<n;++i){
		//	cout<<a[i-1]<<" "<<a[i]<<" :\n";
			for (int j=-1;j<=1;++j){
				int t=a[i]+j-a[i-1]-s;
			//	cout<<j<<" "<<t<<" ";
				if (t<=1&&t>=-1){
					dp[i][j+1]=min(dp[i][j+1],dp[i-1][t+1]+(j!=0));
				}

			//	cout<<dp[i][j+1]<<"\n";
			}
		}

		for (int i=-1;i<=1;++i)
		res=min(res,dp[n-1][i+1]);
	//	cout<<res<<" end\n";
	}

	if (res>n) cout<<-1<<"\n";
	else cout<<res<<"\n";
}
