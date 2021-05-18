#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
  node *prev;
  int pos;
};
struct node *last=NULL;
void insertback()
{
  struct node *n,*a;
  static int c;
  n=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&n->info);
  c=c+1;
  n->pos=c;
   if(last==NULL)
  {
    last=n;
    last->next=last;
    last->prev=last;
  }
  else
  {
    last->next->prev=n;
    a=last->next;
    last->next=n;
    n->prev=last;
    n->next=a;
    last=n;
  }
}

void backwardview()
{
  struct node *t;
  if(last==NULL)
  {
    printf("invalid\n");
  }
  else
  {
    t=last;
    do
    {
      printf("%d ",t->info);
      t=t->prev;
    }
    while(t!=last);
    printf("\n");
  }
}

void viewpos()
{
  int a,b,d;
  struct node *t;
  scanf("%d",&a);
  b=a%(last->pos);
  if(b==0)
  d=last->pos;
  else
  d=b;
  t=last;
  while(1)
  {
    if(t->pos==d)
    {
      printf("%d\n",t->info);
      break;
    }
    t=t->next;
  }
}

void insertpos()
{
  struct node *t,*n,*temp;
  int a,b,d,e;
  if(last==NULL)
  printf("invalid\n");
  else{
  n=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&e);
  n->info=e;
  scanf("%d",&a);
  b=a%(last->pos);
  if(b==0)
  d=last->pos;
  else
  d=b;
  t=last;
  while(1)
  {
    if(t->pos==d)
    {
      break;
    }
    t=t->next;
  }

 temp=t;

 n->pos=temp->pos;
 do{
   t->pos=(t->pos)+1;
   t=t->next;
 }while(t!=last->next);

temp->prev->next=n;
n->next=temp;
n->prev=temp->prev;
temp->prev=n;}
}

void deletepos()
{
  struct node *t,*r,*temp;
  int a,b,d;
if(last==NULL)
printf("invalid\n");
else{
  scanf("%d",&a);

  b=a%(last->pos);
  if(b==0)
  d=last->pos;
  else
  d=b;
  t=last;
  while(1)
  {
    if(t->pos==d)
    {
      printf("%d\n",t->info);
      break;
    }
    t=t->next;
  }
  temp=t;
  r=t;
  t=t->next;
    while(t!=last->next){
           t->pos=(t->pos)-1;
       t=t->next;
     }
     if(temp==last)
     last=temp->prev;
     if(last->next==last)
     last=NULL;
     temp->prev->next=temp->next;
     temp->next->prev=temp->prev;
     temp->next=NULL;
     temp->prev=NULL;
     free(r);

}
}
int main()
{
int q,ch;
    scanf("%d",&q);
  while(q--)
  {
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insertback();
           break;
      case 2:insertpos();
           break;
      case 3:deletepos();
           break;
      case 4:viewpos();
          break;
      case 5:backwardview();
           break;
      default:printf("invalid\n");
    }
  }
}
