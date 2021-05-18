#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
  node *prev;
};
void swap(struct node *a,struct node *b);
struct node *START=NULL;
void insertfirst()
{
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  printf("Enter a number");
  scanf("%d",&n->info);
  n->prev=NULL;
  n->next=NULL;
  if(START==NULL)
  START=n;
  else
  {
    START->prev=n;
    n->next=START;
    START=n;
    START->prev=NULL;
  }
}
void deletefirst()
{
  struct node *r;
  if(START==NULL)
  printf("empty");
  else
  {
    r=START;
    START=START->next;
    START->prev=NULL;
    free(r);
  }
}
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
  printf("empty");
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
  if(START==NULL)
  {
    printf("empty");
  }
  else{
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
    //  printf("%d",c);
    }
  }
}

int menu()
{
  int ch;
  printf("\n1 Add Value to list at first position");
  printf("\n2 Delete Value to list at first position");
  printf("\n3 View List");
  printf("\n4 Sort List");
  printf("\n5 Add Value to list at last position");
  printf("\n6 Delete Value to list at last position");
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
      case 1:insertfirst();
           break;
      case 2:deletefirst();
           break;
      case 3:viewlist();
           break;
      case 4:sortlist();
           break;
      case 5:insertlast();
           break;
      case 6:deletelast();
           break;
      case 0: exit(0);
      default:printf("Invalid Choice");
    }
  }
}
