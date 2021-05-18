#include<bits/stdc++.h>
using namespace std;
struct student{
  int rollno;
  int id;
};
int main(){
  queue<struct student> q1;
  struct student a,b,d;
  a.rollno=2;
  a.id=190;
  q1.push(a);
  b.rollno=3;
  b.id=189;
  q1.push(b);
  d.rollno=4;
  d.id=1509;
  q1.push(d);

  //struct student b;
  int c=q1.size();
  cout<<c<<endl;
  cout<<&a<<endl;
  cout<<&b<<endl;
  cout<<&d<<endl;
}
