#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="Combination";
	int a[256];
	for(int i=0;i<256;i++)
		a[i]=0;
	for(int i=0;s[i]!='\0';i++)
	{
		int index=s[i];
		a[index]=a[index]+1;
	}
	for(int i=0;i<256;i++)
	{
		char x=i;
		if(a[i]>1)
		cout<<x<<":"<<a[i]<<endl;
	}
}