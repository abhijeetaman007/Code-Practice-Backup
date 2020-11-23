#include<bits/stdc++.h>
using namespace std;
vector<int> v1,v2;
int binsearch(int a,int k,int n)
{
  int start,end,mid;
  start=0;
  end=n-1;
while(start<=end){
//  cout<<"Inside while"<<endl;
  mid=(start+end)/2;
  if(a==v2[mid])
  return (mid%k);
  if(a>v2[mid])
  {
    start=mid+1;
  }
  if(a<v2[mid])
  {
    end=mid-1;
  }
}
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     //cout<<"In while"<<endl;
    int i,n,k,a,pos,reqpos,f=0;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
      //cout<<"Text";
      cin>>a;
      v1.push_back(a);
      v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++)
    {
      pos=i%k;
      int t=v1[i];
      reqpos=binsearch(t,k,n);
      cout<<reqpos<<endl;
      if(pos==reqpos)
      {
      //  cout<<"yes"<<endl;
        f=1;
      }
      else
      {
        f=0;
        cout<<"no"<<endl;
        break;
      }
    }
    if(f==1)
    cout<<"yes"<<endl;
    //flag=0;
    sort(v2.begin(),v2.end(),greater<int>());

  }
    v1.clear();
    v2.clear();
  }
}
