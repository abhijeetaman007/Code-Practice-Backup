#include<stdio.h>
int main()
{
  int p,r,t;
  float si,x,y;
  scanf("%d",&p);
  scanf("%d",&r);
  scanf("%d",&t);
//  si=(float)((p*r*t)/100);            //implicit type casting does not gives required ans
//  si=(float)((p*r*t)/100);          //implicit type casting does not gives required ans
  x=(p*r*t)/100.0;                //implicit type casting gives required ans
//  y=(p*r*t)/(float)100;         //implicit type casting gives required ans
  //x=p+1;
  printf("%f",x);
}
