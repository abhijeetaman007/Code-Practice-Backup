#include<stdio.h>
int main()
{
    int k1=0,k2=0,i=0,j=0,k=0,s=0,t=0,z=0,prices_count=0,prices[100];
   int p=0;
  scanf("%d",&t);
  for(z=0;z<t;z++)
  { k1=0;k2=0;i=0;j=0;k=0;s=0;p=0;
    scanf("%d",&prices_count);
    for(i=0;i<prices_count;i++)
    scanf("%d",&prices[i]);
    prices[prices_count]=0;
    for(i=0;i<=prices_count;i++)
    {
      //k1=0;
      //k2=0;
      //k2++;
      printf("k2 out side loop ==> %d\n",k2 );
      printf("%d\n",prices_count );
      printf("%d\n",prices[prices_count]);
      if(prices[i]>prices[k2-1]&&prices[i]>prices[k2+1])
      {
        printf("inside if \n");
        for(j=k1;j<=k2;j++)
        {
          printf("k1==>%d\n",k1);
          printf("k2==>%d\n",k2);
          s=s+prices[j];
        //  k1++;
          printf("S==>%d\n",s);
        }
        p=p+((k2-k1+1)*prices[k2]-s);
        s=0;
        k1=k2+1;
      }
     k2++;
    }
    if(p<0)
    p=0;
  //  else
    //p=p;
    printf("profit is %d\n",p);
}
return 0;
}
