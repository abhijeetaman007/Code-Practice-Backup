#include<stdio.h>
int main()
{
  char str[100];
  int n,c=0,k=0,i=0;
  scanf("%d",&n);
  /*for(i=0;i<n;i++)
  {
    printf("Scanning element\n");
    scanf("%c",&str[i]);
  }*/
  fflush(stdin);
  gets(str);
  for(i=0;i<n;i++)
  {
  //  printf("Inside for\n");
    if(str[i]=='x'&&str[i+1]=='x')
    {
  //    printf("Inside if\n");
      while(str[i+2+k]=='x')
      {
        //c=c+1;
        k=k+1;
      }
      break;
    }
  }
  printf("%d",k);

}
