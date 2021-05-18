#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    int n,a,sum=0,s=0;
    ci>>n;
    vector<int> v,v1,v2,c=0;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      sum+=a;
      v1.push_back(a);
      if(a>0){
        c+=1;
        s+=a;
        v2.push_back(a);
      }
    }
    if(c==n)
    {
      cout<<"YES"<<endl;
      continue;
    }
    if(c==0)
    {
      cout<<"NO"<<endl;
      continue;
    }

    sort(v2.begin(),v2.end());
    int l=0,r=0;
    for(int i=0;i<v2.length();i++)
    {
      if((s-v[i])>sum)
      v.push_back(v[i]);
      else
      break;
    }
    for(int i=0;i<v.length();i++)
    {
      int found=-1,flag=0;
      for(int j=0;j<v1.length();j++)
      {
        if(v1[j]==v[i])
        {
          found=j;
          for(int k=found;k>=0;k--)
          {
            l+=v1[k]
            if(l>sum)
            {
              cout<<"NO"<<endl;
              flag=1;
              break;
            }
          }
        }
          if(flag==1)
          break;
          if(flag!=1 && found!=-1)
          {
            r=r+v1[j];
            if(r>sum)
            {
              cout<<"NO"<<endl;
              flag=1;
              break;
            }
          }


      }
      if(l+r-v)
      if(flag==1)
      break;

    }

  }
}
