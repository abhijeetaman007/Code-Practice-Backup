#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node next;
};
node start1=NULL;
node end1=NULL;
node start2=NULL;
node end2=NULL;
node start3=NULL;
node end3=NULL;
void insertnode1(int a,int m)
{
  int c=0;
  node *n;
  while(a--)
  {
    n=(struct node*)malloc(sizeof(struct node));
    if(c<=m)
    scanf("%d",&n->info);
    else
    n->info=0;
    if(start1==NULL)
    {
      start1=n;
      end1=n;
      n->next=NULL;
    }
    else
    {
      end1->next=n;
      end1=n;
      end1->next=NULL;
    }
    c=c++;
  }
}
void insertnode2(int a,int n)
{
  int c=0;
  node *n1;
  while(a--)
  {
    n1=(struct node*)malloc(sizeof(struct node));
    if(c<=n)
    scanf("%d",&n->info);
    else
    n1->info=0;
    if(start2==NULL)
    {
      start2=n1;
      end2=n1;
      n1->next=NULL;
    }
    else
    {
      end2->next=n1;
      end2=n1;
      end2->next=NULL;
    }
  }
  c=c+1;
}
void insertnode3(int a)
{
  int b=0,s=0,sum=0,carry=0;
  node *n,*t1,*t2,*t3;
  b=a+1;
  while(b--)
  {
    n=(struct node*)malloc(sizeof(struct node));
    n->info=0;
    if(start3==NULL)
    {
      start3=n;
      end3=n;
      n->next=NULL;
    }
    else
    {
      end3->next=n;
      end3=n;
      end3->next=NULL;
    }
  }
    t1=start1;
    t2=start2;
    t3=start3;
    while(t3->next!=NULL)
{    s=t1->info+t2->info;
    if(s>9)
    {
      sum=s%10;
      carry=1;
    }
    else
    {
    sum=s;
    carry=0;
    }

    start3->info=sum;
    start3->next->info=carry;
    t3=start3->next;
    t2=start2->next;
    t1=start1->next;
  }

}




int main()
{
  int t,m,n,a;
  scanf("%d",&m);
  scanf("%d",&n);
  if(m>n)
  a=m;
  else
  a=n;
  insertnode1(a,m);
  insertnode2(a,n);


}
