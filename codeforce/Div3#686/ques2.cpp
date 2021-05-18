#include <bits/stdc++.h> 
using namespace std; 

// A function to print all prime 
// factors of a given number n 
std::map<long long int, long long int> m1;
long long int primeFactors(long long int n) 
{ 
	// Print the number of 2s that divide n 
	m1.clear();
	long long int max=-1,max_e;
	while (n % 2 == 0) 
	{ 
		// cout << 2 << " ";
		m1[2]++; 
		n = n/2; 
	} 

	// n must be odd at this point. So we can skip 
	// one element (Note i = i +2) 
	for (long long int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		// While i divides n, print i and divide n 
		while (n % i == 0) 
		{ 
			// cout << i << " i is";

			m1[i]++ ;
			// cout<<m1[i]<<endl;
			
			n = n/i; 
		} 
	} 

	// This condition is to handle the case when n 
	// is a prime number greater than 2 
	if (n > 2) {
		// cout << n << " ";
		m1[n]++; 
	}
	for(auto itr=m1.begin();itr!=m1.end();itr++)
	{
		// cout<<"loop"<<endl;
		// cout<<itr->first<<" "<<itr->second<<endl;
		if(itr->second>max)
		{
			max=itr->second;
			max_e=itr->first;
		}
	}
	return max_e;
} 


bool isPrime(long long int n)
{
	bool prime_check=true;
	if(n<=1)
	{
		// cout<<"Number is not a prime number"<<endl;
		return false;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			prime_check=false;
			break;			
		}
	}
	if(prime_check){
		// cout<<"Number is prime number";
		return true;
	}
	else{
		// cout<<"Number is not a prime number";
		return false;
	}
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    while(t--)
    {
    	long long int n;
    	cin>>n;
    	if(isPrime(n))
    	{
    		cout<<1<<endl;
    		cout<<n<<endl;
    	}
    	else
    	{
    		long long int ind;
    		ind=primeFactors(n);
    		cout<<m1[ind]<<endl;
    		long long int temp=1;
    		// int x;
    		// cin>>x;
    		for(long long int i=0;i<m1[ind]-1;i++)
    		{
    			temp=temp*ind;	
    		}
    		// cin>>x;
    		temp=n/temp;
    		// cout<<temp<<endl;
    		// cin>>x;
    		// cout<<"final Ans"<<endl;
    		for(long long int i=0;i<m1[ind]-1;i++)
    		{
    			cout<<ind<<" ";
    		}	
    		cout<<temp<<endl;
    	}
    }

    
}