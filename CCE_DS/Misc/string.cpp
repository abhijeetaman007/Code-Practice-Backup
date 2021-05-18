#include <iostream>
using namespace std;
//reading integer followed by multiline input strings
int main(){
 int n;     char s1[10],s2[10];
 cout<<"Enter integer";
 cin>>n;
 fflush(stdin);
 cin.get(s1,10,'$');
 fflush(stdin);
 cin.get(s2,10,'$');
 cout<<"s1="<<s1<<endl;
 cout<<"s2="<<s2<<endl;
 return 0;
}