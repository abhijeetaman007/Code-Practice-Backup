#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
  node *prev;
};
//void swap(struct node *a,struct node *b);
struct node *START=NULL;
void insertlast()
{
  struct node *n,*t;
  n=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&n->info);
  t=START;
  if(START==NULL)
  {
    START=n;
    n->next=NULL;
    n->prev=NULL;
  }
  else
  {
    while(t->next!=NULL)
    {
      t=t->next;
    }
    t->next=n;
    n->prev=t;
    n->next=NULL;
  }
}
void deletelast()
{
  struct node *t;
  if(START==NULL)
  printf("empty\n");
  else
  {
    if(START->next==NULL)
    START=NULL;
    else{
      t=START;
      while(t->next!=NULL)
      {
       t=t->next;
      }
      t->prev->next=NULL;
      t->prev=NULL;
      free(t);
    }
  }
}


void viewlist(){
  struct node *t;
  if(START==NULL)
  printf("empty\n");
  else
  {
    t=START;
    while(t!=NULL)
    {
      printf("%d ",t->info);
      t=t->next;
    }
    printf("\n");
  }
}
void sortlist()
{
  struct node *a,*t,*b;
  int temp,c=1;
  t=START;
  b=t;
  if(START==NULL)
  printf("empty\n");
  else
  {
    while(t->next!=NULL)
    {
      while(b->next!=NULL)
      {
        if((b->info)>(b->next->info))
        {
          temp=b->info;
          b->info=b->next->info;
          b->next->info=temp;
          b=b->next;
        }
        else
        {
          b=b->next;
        }

     }
      b=START;
      t=t->next;
    }
  }
}
/*void reverselist()
{
  struct node *t,*a,*b,*c;
  t=START;
  a=NULL;
  if(START==NULL)
  return;
  else
  {
    while(t->next!=NULL)
    {
      b=t;
      c=t->next;
      t->next=a;
      t=c;
      a=b;
    }
    START=t;
    t->next=a;
  }
return;
}*/
void reverselist()
{
  struct node *t,*temp,*a;
  if(START==NULL)
  return;
  else
  {
    //printf("Inside else");
    t=START;
    //a=t;

     do
     {
      //if(t->)
    //  printf("Inside loop");
      //printf("\nbefore num is %d\n",t->info);
      temp=t->next;
      t->next=t->prev;
      t->prev=temp;
      //printf("test\n");
      //printf("%d\n",t);
      a=t;
      t=t->prev;
      //printf("%d\n",t);
      //printf("\nafter num is %d\n",t->info);
    }
    while(t!=0);
    START=a;
    //printf("\noutside loop\n");
  }
}
int main()
{ int q,ch;
  scanf("%d",&q);
  while(q--)
  {
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insertlast();
           break;
      case 2:deletelast();
           break;
      case 3:sortlist();
           break;
      case 4:reverselist();
           break;
      case 5:viewlist();
           break;
    }
  }
}
