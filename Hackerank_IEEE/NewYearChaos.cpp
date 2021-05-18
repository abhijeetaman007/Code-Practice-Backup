#include<bits/stdc++.h>
using namespace std;
int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,a,temp,count=0;
// 		cin>>n;
// 		vector<int> v;
// 		vector<int> found;
// 		// memset(&found, 0, n*sizeof(found[0])); 
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>a;
// 			v.push_back(a);
// 			found.push_back(0);
// 		}
// 		int flag=0;
// 		// int c=0;
// 		// cout<<"Start"<<endl;
// 		for(int i=0;i<n;i++)
// 		{
// 			cout<<"Inside For"<<endl;
// 			if(v[i]!=i+1)
// 			{
// 				cout<<"v[i]-1 is "<<v[i]-1<<"  "<<found[v[i]-1]<<endl;
// 				if(found[v[i]-1]<2)
// 				{
// 					if(v[i+1]==(i+1))
// 					{
// 						found[v[i]-1]=found[v[i]-1]+1;
// 						cout<<"Found is "<<v[i]-1<<" "<<found[v[i]-1]<<endl;
// 						temp=v[i];
// 						v[i]=v[i+1];
// 						v[i+1]=temp;
// 						count+=1;
						
// 						continue;
// 					}
// 					if(v[i+2]==(i+1))
// 					{
// 						found[v[i]-1]=found[v[i]-1]+1;
// 						cout<<"Found is "<<v[i]-1<<" "<<found[v[i]-1]<<endl;
// 						temp=v[i];
// 						v[i]=v[i+2];
// 						v[i+2]=temp;
// 						count+=1;
// 						// found[v[i]-1]=found[v[i]-1]+1;
// 						// cout<<"Found is "<<v[i]-1<<" "<<found[v[i]-1]<<endl;
// 						continue;	
// 					}
// 				}
// 				else
// 				{
// 					cout<<"Too chaotic"<<endl;
// 					flag=1;
// 					break;
// 				}				
// 			}			
// 		}
// 		if(flag==1)
// 		{
// 			continue;
// 		}
// 		else
// 		{
// 			cout<<count<<endl;
// 		}
// 	}
// }	
// {
// 		int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,a,temp,count=0;
// 		cin>>n;
// 		vector<int> q;
// 		// vector<int> found;
// 		// memset(&found, 0, n*sizeof(found[0])); 
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>a;
// 			q.push_back(a);
// 			// found.push_back(0);
// 		}
//     int ans = 0;
//     for (int i = q.size() - 1; i >= 0; i--) {
//         if (q[i] - (i + 1) > 2) {
//             cout << "Too chaotic" << endl;
//             return 0;
//         }
//         for (int j = max(0, q[i] - 2); j < i; j++)
//             if (q[j] > q[i]) ans++;
//     }
//     cout << ans << endl;
// }
// }
{
		int t;
		cin>>t;
		while(t--)
		{
			int n,a,temp,count=0;
			cin>>n;
			vector<int> q;
			for(int i=0;i<n;i++)
			{
				cin>>a;
				q.push_back(a);
			}
		}
}
