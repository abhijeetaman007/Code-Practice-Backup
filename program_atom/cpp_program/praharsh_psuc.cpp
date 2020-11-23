#include<stdio.h>

char check(char *c,int i)
{
  char ch;
  if(c[i]!='\0')
  {
    if(c[i]>=65 && c[i]<=90)
    {
      ch=c[i];
    }
    else
    {
      i=i+1;
      ch=check(c,i);
    }
    return ch;
  }
  else
  {
    ch='0';
    return ch;
  }
}


int main()
{
  char c[100],b;
  printf("Enter String:  ");
  gets(c);
  b=check(c,0);
  if(b!='0')
  printf("First capital letter is %c",b);
  else
  printf("No capital letter found");
  return 0;
}
