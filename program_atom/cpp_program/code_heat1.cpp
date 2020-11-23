#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    vector<int> v;
    for(int i=a;i<=b;i++)
    {
    //  cout<<"tEST NO. IS"<<i<<endl;
      int c=0;
        for(int j=1;j<=sqrt(i);j++)
        {
          if(i%j==0)
        {
      //    cout<<"factor is"<<j<<endl;
          if((i/j)==j){
            c=c+1;
        //    cout<<"pushed from if"<<endl;
          }
          else
          c=c+2;
        }
    }
//    cout<<"count is "<<c<<endl;
    v.push_back(c);
  }
  /*  for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }*/
    //cout<<endl;
    int max=*max_element(v.begin(),v.end());
    int count=0;
    for(int i=0;i<v.size();i++)
    {
      if(v[i]==max)
      count=count+1;
    }
    cout<<count+1<<endl;
  }
}
