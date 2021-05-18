#include<bits/stdc++.h>
using namespace std;
struct node{
  int info;
  int flag;
};
int main()
{
    int n,z,c=0;
    vector<int> v,count;
    cin>>n>>z;
    for(int i=0;i<z;i++)
    {
      int a;
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
  /*  for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }*/

    vector<node> v1(n+1);

    for(int i=1;i<=n;i++)
    {
    v1[i].info=i;
    cout<<"TEst"<<endl;
    }


int cc=1;


for(int k=1;k<n;k++){
  int i=0;
    while(1)
    { int fg=0;
      i++;
      i=i+k;
      int pos=i%n;
      if(pos==0)
      pos=n;
      cc=cc+1;
      cout<<"checking for"<<v1[pos].info<<endl;
      for(int j=0;j<z;j++)
      {
        cout<<"element from v to be checked"<<v[j]<<endl;
        if(v1[pos].info==v[j])
        {
          cout<<"Inside first if"<<endl;
          if(v1[pos].flag==0)
          {
            cout<<"Inside second if"<<endl;
            v1[pos].flag=1;
            c=c+1;
            cout<<"count is "<<c<<endl;
            if(c==z)
            {
              cout<<"found and count is"<<c<<endl;
              count.push_back(cc);
              cout<<"Final ans for this pass"<<cc<<endl;
              fg=1;
              break;
            }
            break;
          }
          else
          continue;

        }
      }
      if(fg==1)
      break;
    }
  }
    for(int i=0;i<count.size();i++)
    cout<<"All counts are"<<count[i]<<endl;
    cout<<"Final Ans is"<<*min_element(count.begin(),count.end());
}
