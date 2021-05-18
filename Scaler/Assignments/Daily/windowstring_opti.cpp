#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	vector<int> v;
	vector<int> v1(256,0),v2(256,0);
	// unordered_set<char> s;
	unordered_map<char,int> m;
	for(int i=0;i<b.size();i++)
	{
		// s.insert(b[i]);
		m[b[i]]=0;
		v1[b[i]]++;
	}
	for(int i=0;i<a.size();i++)
	{
		if(m.find(a[i])!=m.end())
		{
			v.push_back(i);
		}
	}
	cout<<"v is "<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	int j=0;
	while(v1>v2)
	{
		cout<<"in"<<endl;
		if(j==v.size())
		{
			cout<<"not found"<<endl;
			return 0;
		}
		if(v1[a[v[j]]]>v2[a[v[j]]])
			v2[a[v[j]]]++;
		m[a[v[j]]]++;
		j++;
	}
string x;
for(int k=v[0];k<=v[j-1];k++)
	x=x+a[k];
cout<<"initial window "<<x<<endl;
	// for(int j=0;j<n;j++)
	// {
	// 	if(v1==v2)
	// 		break;
	// 	else
	// 	{
	// 		v2[]
	// 	}
	// }

	// for(int i=0;i<n;i++)
	// {

	// }

	// while(1)
	// {
	//     int f=0;
	//     if(v1==v2)
	//     break;
	//     for(int k=0;k<v2.size();k++)
	//     {
	//         if(v1[k]>v2[k])
	//         {
	//             f=1;
	//             break;
	//         }
	//     }
	//     if(f==0)
	//     break;
	// 	if(j==v.size())
	// 	{
	// 	    string x="\0";
	// 	    cout<<"not found"<<endl;
	// 		// return x;
	// 	}
	// 	v2[a[v[j]]]++;
	// 	m[a[v[j]]]++;
	// 	j++;
	// }
	
	j--;
	m[a[v[j]]]--;
	int i=0;
	int ans=v[j]-v[i]+1;
	int l=v[0];
	int r=v[j];
	cout<<"init ans "<<ans<<endl;
	// cout<<m['a']<<" "<<m['b']<<" "<<m['c']<<endl;
	cout<<"initial l "<<l<<"initial r is "<<r<<endl;
	// j=j-1;


	// j=j-1;
	// while(m[a[v[i]]]>v1[a[v[i]]])
	// 	{
	// 		cout<<"extra"<<endl;
	// 		m[a[v[i]]]--;
	// 		i++;
	// 	}

	// if(v[j]-v[i]+1<ans)
	// 	{
	// 		cout<<"updated"<<endl;
	// 		ans=v[j]-v[i]+1;
	// 		l=v[i];
	// 		r=v[j];
	// 	}
	// j++;

	while(j<v.size())
	{
		cout<<"left is "<<v[i]<<" right is "<<v[j]<<endl;
		cout<<"inside"<<endl;
		m[a[v[j]]]++;
		while(m[a[v[i]]]>v1[a[v[i]]])
		{
			cout<<"char is "<<a[v[i]]<<endl;
			cout<<m[a[v[i]]]<<endl;
			cout<<"while"<<endl;
			m[a[v[i]]]--;
			i++;
		}
		cout<<"final left "<<v[i]<<" right is "<<v[j]<<endl;
		cout<<"diff is "<<v[j]-v[i]+1<<endl;
		if(v[j]-v[i]+1<ans)
		{
			cout<<"updated"<<endl;
			ans=v[j]-v[i]+1;
			l=v[i];
			r=v[j];
		}
		j++;
	}
	string str;
	cout<<"l is "<<l<<endl;
	cout<<"r is "<<r<<endl;
	for(int k=l;k<=r;k++)
		str=str+a[k];
	cout<<str<<endl;

}


// xiEjBOGeHIMIlslpQIZ6jERaAVoHUc9Hrjlv7pQpUSY8oHqXoQYWWll8Pumov89wXDe0Qx6bEjsNJQAQ0A6K21Z0BrmM96FWEdRG69M9CYtdBOrDjzVGPf83UdP3kc4gK0uHVKcPN4HPdccm9Qd2VfmmOwYCYeva6BSG6NGqTt1aQw9BbkNsgAjvYzkVJPOYCnz7U4hBeGpcJkrnlTgNIGnluj6L6zPqKo5Ui75tC0jMojhEAlyFqDs7WMCG3dmSyVoan5tXI5uq1IxhAYZvRQVHtuHae0xxwCbRh6S7fCLKfXeSFITfKHnLdT65K36vGC7qOEyyT0Sm3Gwl2iXYSN2ELIoITfGW888GXaUNebAr3fnkuR6VwjcsPTldQSiohMkkps0MH1cBedtaKNoFm5HbH15kKok6aYEVsb6wOH2w096OwEyvtDBTQwoLN87JriLwgCBBavbOAiLwkGGySk8nO8dLHuUhk9q7f0rIjXCsQeAZ1dfFHvVLupPYekXzxtWHd84dARvv4Z5L1Z6j8ur2IXWWbum8lCi7aErEcq41WTo8dRlRykyLRSQxVH70rUTz81oJS3OuZwpI1ifBAmNXoTfznG2MXkLtFu4SMYC0bPHNctW7g5kZRwjSBKnGihTY6BQYItRwLUINApd1qZ8W4yVG9tnjx4WyKcDhK7Ieih7yNl68Qb4nXoQl079Vza3SZoKeWphKef1PedfQ6Hw2rv3DpfmtSkulxpSkd9ee8uTyTvyFlh9G1Xh8tNF8viKgsiuCZgLKva32fNfkvW7TJC654Wmz7tPMIske3RXgBdpPJd5BPpMpPGymdfIw53hnYBNg8NdWAImY3otYHjbl1rqiNQSHVPMbDDvDpwy01sKpEkcZ7R4SLCazPClvrx5oDyYolubdYKcvqtlcyks3UWm2z7kh4SHeiCPKerh83bX0m5xevbTqM2cXC9WxJLrS8q7XF1nh

// dO4BRDaT1wd0YBhH88Afu7CI4fwAyXM8pGoGNsO1n8MFMRB7qugS9EPhCauVzj7h