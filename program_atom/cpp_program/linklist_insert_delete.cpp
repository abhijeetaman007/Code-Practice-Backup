// C-programming
#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *link;
};

struct node *START=NULL;

struct node *createnode()
{
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}

void insertlastnode()//To insert last element
{
  struct node *temp, *t;
  temp=createnode();
  printf("Enter a number");
  scanf("%d",&temp->info);
  temp->link=NULL;//to insert at last
  if(START==NULL)
  START=temp;
  else
 {
  t=START;
  while(t->link!=NULL)
  {
    t=t->link;
  }
  t->link=temp;
 }
// printf("\n%d\n",START->info);
}

void deletefirstnode()//To delete first element
{
  struct node *r;
  if(START==NULL)
  printf("List is empty");
  else
  {
    r=START;
    START=START->link;
    free(r);
  }
}
void viewlist()
{
  struct node *t;
  if(START==NULL)
  printf("List is Empty");
  else
  {
    t=START;
    while(t!=NULL)
    {
      printf("%d\t",t->info);
      t=t->link;
    }
  }
}
// to add at first
void insertfirstnode()//To insert first element
{ int a;
  struct node *temp,*t;
  temp=createnode();
  printf("Enter a number");
  scanf("%d",&temp->info);
  temp->link=START->link;
  a=START->info;
  START->link=temp;
  START->info=temp->info;
  temp->info=a;
// printf("\n%d\n",START->info);
//temp->link=START;
}

//To delete last element
void deletelastnode()//To delete last element
{
  struct node *t,*r,*a;
  if(START==NULL)
  printf("List is empty");
  else
  {
    t=START;
    while(t->link!=NULL)
    {
      a=t;
      t=t->link;
    }
    r=t;
    a->link=NULL;
    free(r);
  }
  //printf("%d",a );
  //printf("%d",a->link );
}

int menu()
{
  int ch;
  printf("\n1 Add Value to list at last position");
  printf("\n2 Add Value to list at first position");
  printf("\n3 Delete first Value");
  printf("\n4 Delete last Value");
  printf("\n5 View List");
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
      case 1:insertlastnode();
           break;
      case 2:insertfirstnode();
           break;
      case 3:deletefirstnode();
           break;
      case 4:deletelastnode();
           break;
      case 5:viewlist();
           break;
      case 0: exit(0);
      default:printf("Invalid Choice");
    }
  }
}
