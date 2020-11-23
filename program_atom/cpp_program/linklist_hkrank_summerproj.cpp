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
  //printf("Enter a number");
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
}

void deletefirstnode()//To delete first element
{
  struct node *r;
  if(START==NULL)
  printf("empty\n");
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
  printf("empty\n");
  else
  {
    t=START;
    while(t!=NULL)
    {
      printf("%d ",t->info);
      t=t->link;
    }
      printf("\n");
  }
}
void insertfirstnode()//To insert first element
{ int a;
  struct node *temp,*t;
  temp=createnode();
  //printf("Enter a number");
  scanf("%d",&temp->info);
  temp->link=START;
  START=temp;
}

void deletelastnode()//To delete last element
{
  struct node *t,*r,*a;
  if(START==NULL)
  printf("empty\n");
else{
  if(START->link==NULL)
 {
 START=NULL;
 }
 else
 {
   t=START;
   while(t->link!=NULL)
   {
     a=t;
     t=t->link;
   }
   a->link=NULL;
   free(t);
 }
}

}

int main()
{
  int q,ch,i;
  scanf("%d",&q);
  for(i=0;i<q;i++)
  {
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insertlastnode();
           break;
      case 2:insertfirstnode();
           break;
      case 3:deletelastnode();
           break;
      case 4:deletefirstnode();
           break;
      case 5:viewlist();
           break;
    }
  }
}
