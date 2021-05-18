// C++ program to find the nearest prime to n.
#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
#include<cmath>
vector<int> primes;
void Sieve()
{
	int n = MAX;
	int nNew = sqrt(n);
	int marked[n/2+500] = {0};
	for (int i=1; i<=(nNew-1)/2; i++)
		for (int j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1)
			marked[j] = 1;
	primes.push_back(2);
	for (int i=1; i<=n/2; i++)
		if (marked[i] == 0)
			primes.push_back(2*i + 1);
}
int binarySearch(int left,int right,int n,int &idx)
{
	if (left<=right)
	{
		int mid = (left + right)/2;
		if (mid == 0 || mid ==(int) primes.size()-1){
			idx=mid;
			return primes[mid];
		}
		if (primes[mid] == n){
			idx=mid;
			return primes[mid];
		}
		if (primes[mid] < n && primes[mid+1] > n){
			idx=mid;
			return primes[mid];
		}
		if (n < primes[mid])
			return binarySearch(left, mid-1, n,idx);
		else
			return binarySearch(mid+1, right, n,idx);
	}
	return 0;
}
int main()
{
	Sieve();

	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		int n;
		cin>>n;
		int t=sqrt(n);
		int idx;
		int a=binarySearch(0, primes.size()-1, t,idx);
		long long int ans1=a*primes[idx+1];
		long long int ans2=a*primes[idx-1];
		if(ans1<=n){
			cout<<"Case #"<<j<<": "<<ans1<<endl;
		}
		else{
			cout<<"Case #"<<j<<": "<<ans2<<endl;
		}
	}

}
