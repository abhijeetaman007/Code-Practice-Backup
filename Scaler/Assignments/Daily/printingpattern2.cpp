#include<bits/stdc++.h>
using namespace std;
    vector<vector<int> > solve(int A) {
    vector<vector<int> > ans(A, vector<int> (A));
        for(int i =0;i<A;i++)
        {
             for(int j=A;j>=A-i;j--)
            {
                ans[i][j-1]=A-j+1;
            }
        }

        return ans;
}

int main()
{
	int a;
	cin>>a;

vector<vector<int> > ans;	
ans=solve(a);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
			cout<<ans[i][j]<<" ";
		cout<<"\n";
	}
}