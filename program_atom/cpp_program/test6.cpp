#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    unsigned long long sum=0;
	    int m=0;
	    while(q--){
	        int i,j;
	        cin>>i>>j;

	        sum=sum+abs(i-m)+abs(i-j);

	        m=j;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
