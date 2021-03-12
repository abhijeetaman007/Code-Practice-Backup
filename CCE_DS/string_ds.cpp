#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	cout<<"Enter String "<<endl;
	cin>>s;
	char str[100];
	cout<<"Enter SubString "<<endl;
	cin>>str;
	int n=0;
	for(int i=0;str[i]!='\0';i++)
	{
		n++;
	}
	char s1[100];
	int a;
	for(int i=0;s[i]!='\0';i++)
	{
		int j=0;
		int k=i;
		while(s[k]==str[j] && j<n)
		{
			j++;
			k++;
		}
		if(j==n)
		{
			a=i;
			i=k-1;
			break;
		}
	}
	int j=0;
	for(int i=0;i<s[i]!='\0';i++)
	{
		if(i==a)
		{
			i=i+n-1;
		}
		else
			s1[j++]=s[i];
	}
	s1[j]='\0';
	cout<<s1<<endl;
}