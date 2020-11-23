#include<stdio.h>
int main()
{
  char c[100];
  int count=1,i=0;
  gets(c);
  if(c[0]!=0){

    for(i=0;c[i]!='\0';i++)
    {
      if((c[i]>=65)&&(c[i]<91))
      {
        count=count+1;
      }
    }
    printf("%d",count);
  }
  else
  printf("%d",0);
}
