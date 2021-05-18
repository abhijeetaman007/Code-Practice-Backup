#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	if(A.size()<2)
	{
		for(int i=0;i<n;i++)
			cout<<A[i]<<" ";
	}
    else
    {
        int t1=A[0]*A[1];
        int t2=A[A.size()-1]*A[A.size()-2];
        if(A.size()>2)
        {
            vector<int>v;
            for(int i=1;i<A.size()-1;i++)
            {
                v.push_back(A[i-1]*A[i+1]);
            }
            for(int i=1;i<A.size()-1;i++)
            {
                A[i]=v[i-1];
            }
        }
        swap(A[0],t1);
        swap(A[A.size()-1],t2);
        // return A;
        for(int i=0;i<n;i++)
			cout<<A[i]<<" ";
    }
}