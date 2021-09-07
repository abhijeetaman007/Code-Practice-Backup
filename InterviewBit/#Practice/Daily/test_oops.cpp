#include<bits/stdc++.h>
using namespace std;
// class Base
// {
// public:
// 	Base()
// 	{
// 		cout<<"BC"<<endl;

// 	}
// 	~Base()
// 	{
// 		cout<<"BD"<<endl;
// 	}
// };
// class Derived:public Base
// {
// public:	
// 	Derived()
// 	{
// 		cout<<"DC"<<endl;
// 	}
// 	~Derived()
// 	{
// 		cout<<"DD"<<endl;
// 	}
// };

// int main()
// {
// 	// Base b;
// 	Base *p=new Derived();
// 	// delete p;
// 	return 0;
// }

// class B1
// {
// public:
// 	void show()
// 	{
// 		cout<<"B1"<<endl;
// 	}
// };
// class B2
// {
// public:
// 	void show1()
// 	{
// 		cout<<"B2"<<endl;
// 	}
// };
// class D:public B1,public B2
// {
// public:
// 	D()
// 	{
// 		cout<<"D"<<endl;
// 	}
// };
int main()
{
	int i=0,j=0;
	int c=0;
	int m=5;
	for(;i<m&&j<m;)
	{
		c++;
		if(i==j)
		{
			i++;
			j=0;	
		}else
		{
			j++;
		}
		cout<<"i : "<<i<<"j : "<<j<<endl; 
	}
	cout<<c<<endl;
}