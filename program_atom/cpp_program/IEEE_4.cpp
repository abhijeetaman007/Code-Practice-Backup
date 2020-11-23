#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  string s;
  char t;
  getline(cin,s);
  int i=0;
  int n=s.length();
  for(int i=0;i<n;i++)     //Sorting on the basis of alphabetical order
  {
    for(int j=0;j<n-1-i;j++)
    {
      if(s[j]>s[j+1])
      {
        t=s[j];
        s[j]=s[j+1];
        s[j+1]=t;
      }
    }
  }
  //cout<<s<<endl;
  for(int i=0;i<n;i++)       //Counting number of each alphabet
  {
    int c=1;
    for(int j=i;j<n;j++)
    {

          if(j+1<n && s[j]==s[j+1])
          {
            c=c+1;
            continue;
          }
        else
        {
          cout<<"'"<<s[j]<<"'"<<" : "<<c<<endl;
          i=j;
          break;
        }
    }
  }
}
