#include<stdio.h>
int main()
{
  int i,j,k,n=0;
  scanf("%d",&n);
  if(n>0&&n<=100)
  {
     for(j=0;j<n;j++)
    {
      for(i=0;i<n-j-1;i++)
      printf(" ");
      for(k=0;k<j+1;k++)
      printf("#");
      printf("\n");
    }
    //printf("test");
    return 0;
  }
  else
return 0;
}
