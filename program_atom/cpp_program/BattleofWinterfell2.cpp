#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  queue<int> q,q1,q2,q3,q4;
  int t;
  cin>>t;
  char s,s1='D',s2='E';
  while(t--){
   cin>>s;
   if(s==s2)
   {
      int m,n;
      cin>>m>>n;
      switch(m)
      {
            case 1:q1.push(n);
                   if(q1.size()==1)
                     q.push(m);
                   break;
            case 2:q2.push(n);
                  if(q2.size()==1)
                  q.push(m);
                  break;
            case 3:q3.push(n);
                 if(q3.size()==1)
                   q.push(m);
                   break;
             case 4:q4.push(n);
                 if(q4.size()==1)
                   q.push(m);
                  break;
      }
   }
   if(s==s1)
   {
        int m,n;
        m=q.front();
        switch(m)
        {
          case 1:n=q1.front();
                  cout<<m<<" "<<n<<endl;
                  q1.pop();
                  if(q1.empty())
                  q.pop();
                  break;
          case 2:n=q2.front();
                cout<<m<<" "<<n<<endl;
                q2.pop();
                if(q2.empty())
                q.pop();
                break;
          case 3:n=q3.front();
                cout<<m<<" "<<n<<endl;
                q3.pop();
                if(q3.empty())
                q.pop();
                break;
          case 4:n=q4.front();
                cout<<m<<" "<<n<<endl;
                q4.pop();
                if(q4.empty())
                q.pop();
                break;
        }
   }
  }
}
