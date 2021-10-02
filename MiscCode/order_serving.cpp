// #include<bits/stdc++.h>
// using namespace std;

// #define deb(x) cout<<#x<<" "<<x<<endl;

// int getMin(int arr[], int n)
// {
//     int res = arr[0];
//     int idx=0;
//     for (int i = 1; i < n; i++)
//     {
//     	if(res<arr[i])
//     	{
//     		res=arr[i];
//     		idx=i;
//     	}
//     }
//  	arr[idx] = INT_MAX;
//     return res;
// }

// int main()
// {
// 	int n,w;
// 	cin>>w>>n;
// 	// vector<int> ans,v(n);
// 	int ans[n],v[n],wait[1e6];
// 	int k=-1;
// 	int j=-1;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>v[i];
// 	}
// 	priority_queue<int,vector<int>,greater<int> > q;




// 	for(int i=0;i<n;i++)
// 	{
// 		deb(k);
// 		deb(i);
// 		deb(v[i]);

// 		if(k==-1 || ans[k]>=v[i])
// 		{
// 			deb("if");
// 			ans[++k]=v[i];
// 			// k++;
// 			// ans.push_back(v[i]);
// 		}
// 		else if(j+1<w)
// 		{
// 			deb("els if");

// 			// q.push(v[i]);
// 			wait[++j]=v[i];
// 		}
// 		else
// 		{
// 			deb("else");

// 			// ans.push_back(q.top());
// 			ans[++k]= getMin(wait,1e6);
// 			// k++;
// 			// q.pop();
// 			// q.push(v[i]);
// 			wait[++j]=v[i];



// 		}
// 	}
// 	// while(!q.empty())
// 	// {
// 	// 	// ans.push_back(q.top());
// 	// 	ans[++k] = q.top();
// 	// 	q.pop();
// 	// }
// 	sort(wait,wait+1e6)
// 	for(int i=0;i<1000000;i++)
// 	{
// 		if(wait[i]==INT_MAX)
// 		{
// 			break;
// 		}
// 		ans[++k]=getMin(wait,1e6);
// 	}

// 	cout<<"k : "<<k<<endl;

// 	//Output
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<ans[i]<<" ";
// 	}

// }


// // 4
// // 8
// // 10 15 20 25 15 30 5 27

#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,w,ind,k=0;
	cin>>w>>n;
	int a[n],temp[n], wait[w];
	for(int i=0;i<n;i++) cin>>temp[i];
	a[0]=temp[0];
	for(i=1,j=1;i<n;i++){
		if(temp[i]<=a[j-1]){
			a[j]=temp[i];
			j++;
		}
		else if(k==w){
			int min=wait[0];
			for(int f=0;f<w;f++){
				if(wait[f]<=min) {
				min=wait[f];
				 ind=f;
				}
			}
			a[j]=min;
			j++;
			wait[ind]=temp[i];
		}
		else{
		if(temp[i]>a[j-1]){
			wait[k]=temp[i];
			k++;
		}
		}
	}
	sort(wait,wait+w);
	for(int x=0;x<w;x++){
		a[j]=wait[x];
		j++;
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}