#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	map<int,int> m;
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
		m[v[i]]=m[v[i]]+1;
	}

	cout<<m.size()<<endl;
	if(m.size()==2){
		// cout<<"inside"<<m[0]<<m[1]<<endl;
		auto it=m.begin();
		auto itr=it++;
		cout<<"inside"<<it->second<<itr->second<<endl;

		if((it->second)==(itr->second))
		cout<<"WIN"<<endl;
        else
		cout<<"LOSE"<<endl;
	}
	else
		cout<<"LOSE"<<endl;
}