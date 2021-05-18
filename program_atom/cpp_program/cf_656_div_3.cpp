#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,y,z;
    cin>>x>>y>>z;
    if(x!=y && y!=z && x!=z){
      cout<<"NO"<<endl;
      continue;
    }
    if(x==y && y==z && z==x)
    {
      cout<<"YES"<<endl;
      cout<<x<<" "<<y<<" "<<z<<endl;
      continue;
    }
    else{
            if(x==y || y==z || z==x)
      {
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]==v[1])
        {
          cout<<"YES"<<endl;
          cout<<v[0]<<" "<<v[2]<<" "<<v[2]<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }

      }
      else
      {
        cout<<"NO"<<endl;
        continue;
      }


    }

  }
}
