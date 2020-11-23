#include<bits/stdc++.h>
using namespace std;
int main()
{
  string t,s;
  getline(cin, s);
  vector<string> v;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]==' ')
      {
        v.push_back(t);
        t='\0';
      }
      else
      {
        t=t+s[i];
        if(i==(s.size()-1))
        {
          v.push_back(t);
        }
      }
  }
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<endl;
  }
}
