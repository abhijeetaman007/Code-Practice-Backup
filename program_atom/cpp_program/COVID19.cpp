#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,t=0;

  cin>>t;
  while(t--){
    int flag=0;
    vector<int> v,dv,count;
    cin>>n;
    if(n<=8){
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(a>10)
    {
      flag=1;
      break;
    }

    v.push_back(a);
    if((i-1)>=0)
    {
      if(v[i]>v[i-1])
        dv.push_back(v[i]-v[i-1]);
        else
        {
            flag=1;
            break;
        }
    }

  }

  if(flag==1)
  continue;

  for(int i=0;i<n;i++)
  {
    //cout<<"Element under check"<<v[i]<<endl;

      int c=1;
    for(int j=i;j<n-1;j++)
    {
      //cout<<"First Differece is"<<dv[i]<<endl;
      if(dv[j]<=2)
      {
          c=++c;
        //  cout<<"c from 1 is"<<c<<endl;
      }
      else
      break;
    }
    for(int k=i-1;k>=0;k--)
    {
//      cout<<" Second Differece is"<<dv[i]<<endl;
      if(dv[k]<=2)
      {
          c=++c;
  //        cout<<"c from 2 is"<<c<<endl;
      }
      else
      break;
    }
    //cout<<"c before push"<<c<<endl;
    count.push_back(c);
    //cout<<endl;
  }
  cout<< *min_element(count.begin(), count.end());
  cout<< *max_element(count.begin(), count.end());
  cout<<endl;
}
else
continue;
}
}
