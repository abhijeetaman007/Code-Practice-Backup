#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int i=0;
  string str,temp;
  stack<char>  s;
  cin>>str;
  cout<<"Your string is"<<str<<endl;
  cout<<"The string length is "<<str.length()<<endl;
  for(i=0;i<str.length();i=i+1)
  {
    if(str[i]=='{'||str[i]=='['||str[i]=='('){
      s.push(str[i]);
   cout<<"new stack inserted \n"<<s.top()<<endl;

    }
  //  else{
      if(str[i]=='}'||str[i]==']'||str[i]==')')
      {
        if(s.top()=='{')
        {
          if(str[i]=='}'){
            s.pop();
          //cout<<"new stack after delete\n"<<s.top()<<endl;
          cout<<"Test\n";
          //continue;
        }
        else{
        printf("NO {}");
        //return 0;
         }
        }

        if(s.top()=='[')
        {
          if(str[i]==']'){
            s.pop();
        //  cout<<"new stack after delete \n"<<s.top()<<endl;
         cout<<"Test\n";
          //continue;
        }
        else{
        printf("NO []");
        //return 0;
         }
        }

        if(s.top()=='(')
        {
          if(str[i]==')'){
            s.pop();
        //  cout<<"new stack after delete\n"<<s.top()<<endl;
          cout<<"Test\n";
          //continue;
        }
        else{
        printf("NO ()");
      //  return 0;
         }
       }
     }
    //  else
      //continue;
    //  {}
    //}
 printf("Inside Loop\n");
  }
printf("\nOutside Loop\n");
  if(s.empty()==true)
  cout<<"YES from out";
  else
  cout<<"NO from out";
}
