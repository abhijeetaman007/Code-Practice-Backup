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
  static struct node *m;
  static int c=0;
  int d=0,p;
  c=c+1;
  n=(struct node*)malloc(sizeof(struct node));
  n->info=a;
  if(START==NULL)
  {
    START=n;
    n->next=NULL;
    m=n;
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
    p=c%2;
    if(p==0)
    {
      m=m->next;
    }
}
  d=m->info;
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
  printf("%d",b);
  return 0;
}
