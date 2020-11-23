#include<bits/stdc++.h>
using namespace std;
int c=0;
class testclass{
public:
	testclass()
	{
		c++;
		cout<<"No. of object created is "<<c<<endl; 
	}
	~testclass()
	{
		cout<<"No. of objects destroyed is "<<c<<endl;
		c--;
	}
};
int main()
{
	cout<<"Inside main"<<endl;
	testclass t1,t2,t3,t4;
	{
		cout<<"block 1"<<endl;
		testclass t5;
	}
	{
		cout<<"block 2"<<endl;
		testclass t6;
	}
	cout<<"again in main"<<endl;
	return 0;
}
