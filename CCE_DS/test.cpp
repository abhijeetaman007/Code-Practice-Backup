#include<bits/stdc++.h>
using namespace std;
// void print(char s[])
// {
// 	cout<<s<<endl;
// }
// int main()
// {
// 	// int i=0;
// 	// if(true  || ++i>0)
// 	// {
// 	// 	cout<<i<<endl;
// 	// }
// 	char s[]="abcdefgh";
// 	// print(s[4]);
// 	// cout<<s<<endl;
// 	// cout<<*s<<endl;
// 	// cout<<&s<<endl;
// 	// cout<<(s+1)<<endl;
// 	// *s='z';
// 	// cout<<s<<endl;
// 	// cout<<*s<<endl;
// 	// // cout<<&s[0]<<endl;
// 	// cout<<&s[1]<<endl;
// 	// cout<<&s[2]<<endl;
// 	int a[]={1,2,3,4,5};
// 	// cout<<a<<endl;
// 	// cout<<&a<<endl;
// 	cout<<&a[2]<<endl;
// 	// cout<<*a<<endl;
// 	// cout<<s[1]<<endl;

// 	// char *c ="hello";
// 	// cout<<c<<endl;
// 	// cout<<*c<<endl;
// 	// *c='z';
// 	// cout<<c<<endl;
// }	
class A
{
public:	
	int x=1;
	void display()
	{
		cout<<"x is "<<1<<endl;
	}
};

int main()
{
	A *a=new A;
	cout<<a->x<<endl;
	a->display();
}