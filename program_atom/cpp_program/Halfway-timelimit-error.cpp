#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *next;
};
struct node *START=NULL;
int insertnode(int a)
{
  struct node *n,*t;
  static int c=0;
  c=c+1;
  n=(struct node*)malloc(sizeof(struct node));
  n->info=a;
  if(START==NULL)
  {
    START=n;
    n->next=NULL;
  }
  else
  {
    t=START;
    while(t->next!=NULL)
    {
      t=t->next;
    }
    t->next=n;
    n->next=NULL;
  }
  return c;
}
int halfway(int b)
{
  int c=b/2;
  int d;
  struct node *t;
  t=START;
  while(c--)
   t=t->next;
  d=t->info;
  return d;
}
int main()
{
  int a,b,p;
    while(1)
  {
     scanf("%d",&a);
    if(a!=-1)
    b=insertnode(a);
    else
    break;
  }
  p=halfway(b);
  printf("%d",p);
  return 0;
}
