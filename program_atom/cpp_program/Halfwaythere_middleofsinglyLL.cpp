#include<stdio.h>
#include<stdlib.h>
struct node{
  int info,index;
  struct node *next;
};
struct node *START=NULL;
int insertnode(int a)
{
  struct node *n,*t;
  static int c=0;
  c=c+1;
//  printf("Value of c is %d\n",c);
  n=(struct node*)malloc(sizeof(struct node));
  n->index=c;
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
    //  printf("Inside while");
    }
    t->next=n;
    n->next=NULL;
  }
  return c;
}
int halfway(int b)
{
  int c=b/2;
//  printf("The value of c in halfway is %d\n",c);
  int d;
  struct node *t;
  t=START;
  while(c--)
  {
    //printf("\nInside while of halfway\n");
    t=t->next;
  //  printf("\n%d\n",t->info);
  }
  d=t->info;
//  printf("The value of d in halway is %d",d);
  return d;
}
int main()
{
  int a,b,p;
    while(1)
  {
     scanf("%d",&a);
    if(a!=-1)
    {
      b=insertnode(a);
    //  printf("The count is %d\n",b);
    }
    else
    break;
  }
  p=halfway(b);
  printf("%d",p);
  return 0;
}
