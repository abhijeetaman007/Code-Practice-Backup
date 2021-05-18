#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v) {
    int n=v.size();
    vector<int> s(n),p(n);
    s[n-1]=v[n-1];
    p[0]=v[0];
    for(int i=1;i<n;i++)
    {
        p[i]=(__gcd(p[i-1],v[i]));
        s[n-1-i]=__gcd(s[n-i],v[n-i-1]);
    }
    for(int i=0;i<n;i++)
    	cout<<p[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    	cout<<s[i]<<" ";
    cout<<endl;
    int gcd_max,gcd,flag=0;
    {
        for(int i=0;i<n;i++)
        {
        	if(i-1<0)
        	{
        		gcd=s[i+1];
        	}
        	else{
        	if(i+1>n-1)
        	gcd=p[n-2];
        	else
            gcd=__gcd(p[i-1],s[i+1]);
            }
        	cout<<"gcd is "<<gcd<<endl;
            if(flag==0)
            {
                gcd_max=gcd;
                flag=1;
            }
            else
            {
                if(gcd_max<gcd)
                	{
                		gcd_max=gcd;
                	}
            }
        }
    }
    return gcd_max;
}

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	cout<<solve(v);
}