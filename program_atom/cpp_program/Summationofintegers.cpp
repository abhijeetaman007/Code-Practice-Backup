#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,n,sum=0,i,j;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
 for(i=0;i<n;i++)
  cout<<v[i]<<endl;
  for(i=0;i<n;i++)
  {
    int c=0;
    for(j=i;j<n;j++)
    {
      cout<<"v["<<i<<"] is"<<v[i]<<endl;
      cout<<"v["<<j<<"] is"<<v[j]<<endl;
      if(v[i]==v[j])
      {
        c++;
        cout<<"c is"<<c<<endl;
        if(j==(n-1)){
          if((c%2)==0)
          {
            sum=sum+v[i];
            cout<<"sum is"<<sum<<endl;
            break;
          }
        }
      }
      else
      {
        if((c%2)==0)
        {
          sum=sum+v[i];
          cout<<"sum is"<<sum<<endl;
        }
        i=j-1;
        break;
      }
    }
  } 
  cout<<sum;
}
