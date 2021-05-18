#include<bits/stdc++.h>
using namespace std;
// int fun(int n)
// {
// 	int res;
// 	int c=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<"iside i"<<i<<endl;
// 		int j=i;
// 		while(j)
// 		{
// 			j&=j-1;
// 			cout<<"inside j"<<endl;		
// 			cout<<j<<endl;	
// 			c++;
// 		}
// 	}
// 	return c;
// }

// int main()
// {
// 	cout<<fun(100)<<endl;
// }
int main()
{
	vector<int> a(n+1);
    vector<int> ans;
    // cout<<"size is "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        // cout<<v[i][0]<<
        a[v[i][0]-1]+=v[i][2];
        a[v[i][1]]+=v[i][2]*(-1);
    }
    long long int sum=0,max=0;
    for(int i=0;i<n;i++)
    {
        // cout<<a[i]<<" ";
        sum=sum+a[i];
        ans.push_back(sum);
    }
    return ans;
}
