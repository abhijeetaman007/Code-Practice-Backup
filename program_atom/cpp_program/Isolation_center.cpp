#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n,q;
  string s;
  cin>>n;
  cin>>q;
  cin>>s;
  vector<vector<char> >v(26);
  vector<int> count(26);
  //cout<<s.size()<<s[1]<<endl;
  int k=0;
  for(int i=0;i<s.size();i++)
  {
  //cout<<"TEST1"<<endl;
    int flag=0;
    for(int j=0;j<k;j++)
    {
      //cout<<"For loop"<<endl;
      if(v[j].front()==s[i])
      {
        v[j].push_back(s[i]);
        count[j]=count[j]+1;
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
    //  cout<<"Inside if 2"<<endl;
      v[k].push_back(s[i]);
      //cout<<"Test2"<<endl;
      count[k]=1;
      k++;
      //cout<<"End of if 2"<<endl;
    }
  }
  sort(count.begin(),count.end(),greater<int>());
  /*for(int i=0;i<count.size();i++)
  cout<<count[i]<<endl;*/
  while(q--)
  {
    int a,sum=0;
    cin>>a;
    for(int i=0;i<count.size();i++)
    {
      int s=count[i]-a;
      if(s>0)
      {
        //cout<<"s is"<<s<<endl;
        sum=sum+s;
        //cout<<"sum is"<<sum<<endl;
      }
      else
      break;
    }
    cout<<sum<<endl;
  }
}
}
