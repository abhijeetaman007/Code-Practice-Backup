#include<bits/stdc++.h>
using namespace std;
long long int val(string s)
{
	unordered_map<char,int> m;
	m['a']=0;
	m['b']=1;
	m['c']=2;
	m['d']=3;
	m['e']=4;
	m['f']=5;
	m['g']=6;
	m['h']=7;
	m['i']=8;
	m['j']=9	;
	long long int sum=0;
	int k=0;
	for(int i=s.size()-1;i>=0;i--)
	{
		sum=sum+pow(10,k)*m[s[i]];
		k++;
	}
	return sum;
}


int main()
{
	
	long long int a1=0,a2=0,a3=0;
	string s;
	cin>>s;
	a1=val(s);
	cin>>s;
	a2=val(s);
	cin>>s;
	a3=val(s);
	cout<<a1<<" "<<a2<<" "<<a3<<endl;
	if(a1+a2==a3)
		cout<<true<<endl;
	else
		cout<<false<<endl;
}