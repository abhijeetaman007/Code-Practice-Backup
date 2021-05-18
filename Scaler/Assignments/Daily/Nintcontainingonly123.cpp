#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int a) {
    vector<int> ans(a);
		queue<int> q;
		q.push(1);ans[0]=1;
		if(a==1)
		return ans;
		q.push(2);ans[1]=2;
		if(a==2)
		return ans;
		q.push(3);ans[2]=3;
		if(a==3)
		return ans;
		int j=1;
		int count=3;
		while(count<a)
		{
			count++;
			int x=(ans[j-1]*10)+(q.front());
			q.push(q.front());
			q.pop();
			ans[count-1]=x;
			if(count%3==0)
				j++;
		}
	return ans;
}

int main()
{
	int a;
	cin>>a;
	vector<int> ans;
	ans=solve(a);
	// if(a==1)
 //    {
 //        ans[0]=1;
 //    }
 //    if(a==2)
 //    {
 //        ans[0]=1;
 //        ans[1]=2;
 //    }
 //    if(a==3)
 //    {
 //        ans[0]=1;
 //        ans[1]=2;
 //        ans[2]=3;
 //    }
	// if(a>3)
	// {
	// 	queue<int> q;
	// 	q.push(1);ans[0]=1;
	// 	q.push(2);ans[1]=2;
	// 	q.push(3);ans[2]=3;
	// 	int j=-1;
	// 	int count=3;
	// 	while(count<=a)
	// 	{
	// 		if(count%3==0)
	// 			j++;
	// 		int x=ans[j]*10+(q.front());
	// 		q.push(q.front());
	// 		q.pop();
	// 		ans[count++]=x;
	// 		// count++;
	// 	}
	// }
	for(int i=0;i<a;i++)
		cout<<ans[i]<<endl;

}