#include<stdio.h>
#include<string.h>
int main()
{
  char s[50],str[50][50];
  int i=0,c=0,j=0,k=0,t=0,l=0;
  fflush(stdin);
  gets(s);
  /*for(i=0;s[i]!='\0';i=i+1)
  {
  //printf("%d\n",i);
  }
  s[i+1]=' ';
  s[i+2]='\0';
  */printf("test :: %c\n",s[i+1]);
  i=0;
  //for(i=0;s[i]!='\0';i=i+1)
  do
  {
    if(s[i]==' '||s[i]=='\0')
    {
      for(l=t;s[l]!=' ';l=l+1)
      {
        str[j][k]=s[l];
        printf("%c\n",str[j][k]);
        k++;
      }
      str[j][k+1]='\0';
      j=j+1;
      k=0;
      t=l+1;
    }
    i=i+1;
  }
  while(s[i]!=0);
  printf("%s\n",str[0]);
  printf("%s\n",str[1]);
  printf("%s\n",str[2]);
  printf("%s\n",str[3]);
//printf("%s\n",str[4]);
  return 0;
}
