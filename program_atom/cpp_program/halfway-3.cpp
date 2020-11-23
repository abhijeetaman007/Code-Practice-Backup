#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *next;
};
struct node *START=NULL;
void insertnode(int a)
{
  struct node *n,*t;
  n=(struct node*)malloc(sizeof(struct node));
  n->info=a;
  if(START==NULL)
  {
    START=n;
    n->next=NULL;
  }
  else
  {
//    printf("Inside Else");
    t=START;

    while(t->next!=NULL)
    t=t->next;

    t->next=n;
    n->next=NULL;
  }
}

int main()
{ int a;
  while(1)
  {
    scanf("%d",&a);
    if(a!=-1)
    insertnode(a);
    else
    break;
  }
  struct node *sp,*fp;
  sp=START;
  fp=START;
  while(fp!=NULL&&fp->next!=NULL&&fp->next->next!=NULL)
  {
  //  printf("Inside While");
    sp=sp->next;
    fp=fp->next->next;
  }
//  printf("%d",fp->info);
  printf("%d",sp->info);
}
