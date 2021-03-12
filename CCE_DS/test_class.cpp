#include<bits/stdc++.h>
using namespace std;
class A
{
	int x=10;	
	public :void display();
};


void A::display()
{
	cout<<x<<endl;
}
 // void test(char (&c)[5] , string &s)
 // {
 // 	cout<<c<<endl;
 // 	// c="world";
 // 	s="world";
 // 	cout<<c<<endl;
 // 	cout<<s<<endl;
 // }
void test(int &a,int &b)
{
	// *a=*a+10;
	// *b=*b+10;
	a+=10;
	b+=10;

}

int main()
{
	// A a;
	// a.display();
	// cout<<a.x<<endl;
	// cout<<a.x<<endl;
	// a.x=2;
	// cout<<a.y<<endl;

	// cout<<a.x<<endl;
	// A b;
	// cout<<b.x<<endl;
	// string s="hello";
	// char c[]="hello";
	int a=10;
	int b=20;
	// test(&a,&b);
	test(a,b);
	cout<<a<<endl;
	cout<<b<<endl;

	// cout<<c<<endl;
	// cout<<s<<endl;
	// cout<<&c[2]<<endl;
	// cout<<c<<endl;
	// cout<<*c<<endl;
	// cout<<*(c+4)<<endl;
	// cout<<<<endl;
}