#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v{10,5,20};
  // for(auto x:v)
  // {
  //   cout<<x<<" ";
  // }
  // vector<int> :: iterator it;
  // for(it=v.begin();it!=v.end();it++)
  // {
  // 	cout<<(*it)<<" ";
  // }
  int x=5;
  int &ref=x;
  cout<<"x is"<<x<<endl;
  cout<<"&x is"<<&x<<endl;
  cout<<"ref is "<<ref<<endl;
  cout<<"&ref is "<<&ref<<endl;
}
