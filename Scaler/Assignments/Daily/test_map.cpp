#include<bits/stdc++.h>
using namespace std;
// long long int power(int x,int y)
// {
// 	int m=1e9+7;
// 	int ans=1;
// 	// cin>>x>>y;
// 	while(y>0)
// 	{
// 		if(y&1)//Checking for odd power
// 		{
// 			ans=((ans%m)*(x%m))%m;
// 			y=y-1;
// 		}
// 		else
// 		{
// 			x=(x%m*x%m)%m;
// 			y=y>>1;//dividing power by 2
// 		}
// 	}
// 	return ans;
// }
int main()
{
	map<set<int> ,int >m;
	
	int mx=1e6;
	int mod=1e9+7;

	vector<bool> prime(mx+1,true);
	prime[0]=false;
	prime[1]=false;
	vector<int> spf(mx+1,0);

	for(int i=2;i<=mx;i++)
	{
		if(prime[i])
		{
			spf[i]=i;
			for(int j=2;i*j<=mx;j++)
			{
				prime[i*j]=false;
				spf[i*j]=i;
			}
		}
	}
	map<int,set<int> > m1;
	for(int i=2;i<=mx;i++)
	{
		int num=i;
		while(num>1)
		{
			int y=spf[num];
			m1[i].insert(y);
			num=num/y;
		}
	}
	// for(auto it=m1.begin();it!=m1.end();it++)
	// {
	// 	cout<<it->first<<" : ";
	// 	for(auto itr=(it->second).begin();itr!=(it->second).end();itr++)
	// 		cout<<*itr<<" ";
	// 	cout<<endl;
	// }
	// int n;
	// cin>>n;
		int z=1;
	
	std::vector<int> v;
	// for(int i=0;i<n;i++)
	while(z!=-1){
		cin>>z;
		// v[i]=z;
		v.push_back(z);
	}
	int n=v.size();
	for(int i=0;i<n;i++)
	{
		set<int> t;
		for(int j=2;j<=v[i];j++)
		{
			t.insert(spf[j]);		
		}
			auto it=m.find(t);
			if(it==m.end())
			{
				m.insert({t,1});
			}
			else
			{
				int temp=it->second;
				temp=temp+1;
				it->second=temp;
			}	
	}

	for(auto itr=m.begin();itr!=m.end();itr++)
	{
		for(auto it=(itr->first).begin();it!=(itr->first).end();it++)
		{
			cout<<*(it)<<" ";
		}
		cout<<"Total is "<<itr->second<<endl;
	}
	long long int ans=0;
	for(auto itr=m.begin();itr!=m.end();itr++)
	{
		cout<<"total is "<<itr->second<<endl;
		ans=ans+(pow(2,itr->second)-1);
		cout<<ans<<endl;
	}
	int one=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==1)
			one++;
	}
	ans=ans-one;
	cout<<"Ans is "<<ans;
}

// A : [ 251 923 561 230 100 399 542 198 548 892 721 781 174 809 9 232 165 861 36 837 377 313 475 269 210 530 940 570 24 434 764 275 709 325 505 161 724 47 359 625 291 81 406 465 242 767 698 408 629 86 597 358 399 72 979 962 603 919 884 627 353 1 254 414 678 111 575 755 511 287 380 802 720 138 620 314 905 670 74 886 756 671 244 508 744 224 822 347 495 706 326 201 707 580 615 386 43 543 141 554 ]


int Solution::solve(vector<int> &v) {
    //PreComputing Prime Factors and storing in map m1
    map<int,set<int> > m1;
    map<set<int> ,int >m;
	int mx=1e5;
	int mod=1e9+7;
	vector<bool> prime(mx+1,true);
	prime[0]=false;
	prime[1]=false;
	vector<int> spf(mx+1,0);
	for(int i=2;i<=mx;i++)
	{
		if(prime[i])
		{
			spf[i]=i;
			for(int j=2;i*j<=mx;j++)
			{
				prime[i*j]=false;
				spf[i*j]=i;
			}
		}
	}
	for(int i=2;i<=mx;i++)
	{
		int num=i;
		while(num>1)
		{
			int y=spf[num];
			m1[i].insert(y);
			num=num/y;
		}
	}
	
	
	//Finding and storing in map all unique set of prime number and there count 
	int n=v.size();
	for(int i=0;i<n;i++)
	{
		set<int> t;
		for(int j=2;j<=v[i];j++)
		{
			t.insert(spf[j]);		
		}
			auto it=m.find(t);
			if(it==m.end())
			{
				m.insert({t,1});
			}
			else
			{
				int temp=it->second;
				temp=temp+1;
				it->second=temp;
			}	
	}

	//Finding all possible non empty subsequences
	long long int ans=0;
	for(auto itr=m.begin();itr!=m.end();itr++)
	{
		ans=ans+(long long int)(pow(2,itr->second)-1);
	}
	int one=0;
	for(int i=0;i<v.size();i++){
        if(v[i]==1)
        one++;
	}

	ans=ans-one;
	ans=ans%mod;
	return ans;
}
