#include<bits/stdc++.h>
using namespace std; 
class A{
   public:
      int x;
      A(int p){
         cout<<"1"<<endl;
         x=p;
      }
      A(int p, int q){
         cout<<"2"<<endl;
         x=p+q;
      }
};

int main(){
      A obj1(10), obj2(10,20);
      cout<<obj1.x<<" "<<obj2.x;
}
