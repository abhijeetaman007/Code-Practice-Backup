#include<stdio.h>
void fun(int &a,int *b,int c)
{
  printf("%d\n",a);
//  printf("%d\n",*a);
a=10;
  printf("%d\n",b);
  //*b=9;
  printf("%d\n",*b);
  c=21;
}
int main(){
  int a,b,*ptr;
  a=4;
  b=5;
  int c=7;
  ptr=&b;
  fun(a,ptr,c);
  printf("%d\n",a);
  printf("%d\n",c);
}
