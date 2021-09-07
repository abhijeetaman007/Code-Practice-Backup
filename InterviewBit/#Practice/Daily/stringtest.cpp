#include<bits/stdc++.h>
using namespace std;
int main()
{
	// string s;
	char s1[100],s2[100];
	// getline(cin,s);
	// cin>>s;
	// cin.get(s2,13);
	cin.getline(s1,13);//stops when enter is pressed(\n) 
	cin.get(s2,13);//stops but keeps delimiter pending for next line
	// cin.getline(s1,13);
	
	cout<<"First string" <<s1;
	cout<<"Second String"<<s2;

	cout<<"end";
}