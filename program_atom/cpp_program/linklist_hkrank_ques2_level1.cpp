#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
  node *prev;
};
void swap(struct node *a,struct node *b);
struct node *START=NULL;
void insertlast()
{
  struct node *n,*t;
  n=(struct node*)malloc(sizeof(struct node));
  printf("Enter a number");
  scanf("%d",&n->info);
  t=START;
  if(START==NULL)
  {
    START=n;
    n->prev=NULL;
    n->next=NULL;
  }
  else
  {
    if(t->next==NULL)
    {
      t->next=n;
      n->prev=t;
      n->next=NULL;
    }
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
  printf("empty");
  else
  {
    if(START->next=NULL)
    {
      free(START);
      START=NULL;
    }
    else
  {
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
  printf("List is Empty");
  else
  {
    t=START;
    while(t!=NULL)
    {
      printf("%d\t",t->info);
      t=t->next;
    }
  }
}
void sortlist()
{
  struct node *a,*t,*b;
  int temp,c=1;
  t=START;
  b=t;
//  a=t;
  printf("%d",t->info);
  if(START==NULL)
  printf("empty");
  else
  {
    while(t->next!=NULL)
    {
      printf("TEST0\n");
      printf("t is %d\n",t->info);
      while(b->next!=NULL)
      {
        //a=t->next;
        if((b->info)>(b->next->info))
        {
          //swap(a,a->next);
          printf("TEST1\n");
          printf("b is %d\n",b->info);
          temp=b->info;
          b->info=b->next->info;
          b->next->info=temp;
          b=b->next;
          printf("b next is %d\n",b->info);
        }
        else
        {
          printf("No Swapping");
          b=b->next;
        }

     }
      b=START;
      t=t->next;
      printf("t next is %d\n",t->info);
      c=c+1;
      printf("count is %d",c);
    }
  }
}
void reverselist()
{
  struct node *t,*a,*b,*c;
  t=START;
  a=NULL;
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
int menu()
{
  int ch;
  printf("\n1 Add Value to list at last position");
  printf("\n2 Delete Value to list at last position");
  printf("\n3 Sort List");
  printf("\n4 Reverse List");
  printf("\n5 View List");
  //printf("\n6 Delete Value to list at last position");
  printf("\n0 Exit");
  printf("\n\nEnter your choice");
  scanf("%d",&ch);
  return ch;
}
int main()
{
  while(1)
  {
    switch(menu())
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
    //  case 6:deletelast();
      //     break;
      case 0: exit(0);
      default:printf("Invalid Choice");
    }
  }
}
