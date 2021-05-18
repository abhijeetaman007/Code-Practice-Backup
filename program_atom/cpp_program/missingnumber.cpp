#include<stdio.h>
int main()
{
  int a[100],b[100],c[100],m=0,n=0,i=0,j=0,k=0,l=0,temp=0,d[100];
  scanf("%d",&n);
  for(i=0;i<n;i=i+1)
  {
    //printf("Test");
    scanf("%d",&a[i]);
  }
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
        if(b[i]==a[j])
        {
          a[j]=-1;
          //b[i]=0;
        //  printf("inside if\n");
          break;
        }
        else
        {
          //c[k]=b[i];
          //printf("inside else\n");
          k++;
        }
      }
    //  c[k]=b[i];
      //k++;
      if(k==n)
      {
        c[l]=b[i];
        l++;
      }
      k=0;
  }

  //printf("%d\n",k);
for(i=0;i<l;i++)
{
  for(j=0;j<i;j++)
  {
    if(c[i]!=d[j])
    d[j]=c[i];
  }
}


  for(i=0;i<l-1;i++)
  {
    for(j=0;j<l-1-i;j++)
    {if(c[j]>c[j+1])
      {
        temp=c[j];
        c[j]=c[j+1];
        c[j+1]=temp;
      }
    }
  }

  for(i=0; i<l; i++)
      {
          for(j=i+1; j<l; j++)
          {
              if(c[i] == c[j])
              {
                  for(k=j; k<n; k++)
                  {
                      c[k] = c[k + 1];
                  }

                  l--;
                  j--;
              }
          }
      }



  for(i=0;i<l;i++)
  {
    printf("%d ",c[i]);
  }
  return 0;
}
