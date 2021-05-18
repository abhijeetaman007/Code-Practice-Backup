#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a;
  cin>>n;
  vector<int>v,v1;

  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
    v1.push_back(a);
    //cout<<"pushed"<<endl;
  }
  sort(v.begin(),v.end(),greater<int>());
  cout<<"sorted"<<endl;
  vector<int>::iterator ip;
   ip=std::unique(v.begin(),v.end());
   v.resize(std::distance(v.begin(), ip));
   for (ip = v.begin(); ip != v.end(); ++ip) {
     //cout<<"Inside for loop"<<endl;
        cout << *ip << " ";
}
int k;
for(k=0;k<n;k++)
{
  if(v[1]==v1[k])
  {
    cout<<v1[k]<<endl;
    break;
  }
}
int i=1;
int max=v1[k];
int temp=k;
      while(sub_count!=i)
    {

        if(flag!=2 && flag!=3){
          sub_count=1;
        for(int j=1;j<=i;j++)
        {
          if(v[k+1])
          {
            if(v[k+1]>v[k])
            {
            //  flag=1;
              sub_count=sub_count+1;
              k=k+1;
              continue;
            }
            else
            flag=2;
          }
            else
            flag=2;
        }
      }

      if(flag!=3){
        sub_count=0;
      for(int j=1;j<=i;j++)
      {
        if(v[k-1])
        {
          if(v[k-1]>v[k])
          {
            //flag=1;
            sub_count=sub_count+1;
            k=k-1;
            continue;
          }
          else
          flag=3;
        }
          else
          flag=3;
      }
    }




    }
    cout<<"max is"<<max<<endl;
}
