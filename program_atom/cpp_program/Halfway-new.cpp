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
  static node *m;
  static int c=0;
  int d=0,p;
  c=c+1;
  printf("The value of c is %d\n",c);
  n=(struct node*)malloc(sizeof(struct node));
  printf("The value of n is %d\n",n);
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
    printf("Inside Else\n");
    while(t->next!=NULL)
    {
      t=t->next;
    }
    printf("TEst\n");
    printf("old %d\n",t->next);
    t->next=n;
    printf(" new %d\n",t->next);
    n->next=NULL;
    printf("Test 2");
    printf("The c is %d",c);
    p=c%2;
    if(p==0)
    {
      m=m->next;
      //printf("")
      printf("Inside if");
    }
    else
    m=m;
    printf("Test 3");
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
    {
      b=insertnode(a);
      printf("\nMiddle is %d\n",b);
    }
    else
    break;
  }
  printf("\n\nThe final Middle is %d\n\n",b);
  return 0;
}
