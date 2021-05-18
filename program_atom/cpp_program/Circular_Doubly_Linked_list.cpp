#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
  node *prev;
  int pos;
};
struct node *last=NULL;
//static int c=0;
void insertback()
{
  //printf("%d",last);
  struct node *n,*a;
  static int c;
  n=(struct node*)malloc(sizeof(struct node));
  printf("Enter a number");
  scanf("%d",&n->info);
  c=c+1;
  if(last==NULL)
  n->pos=1;
  else
  n->pos=last->pos+1;
  printf("%d",n->pos);
  if(last==NULL)
  {
    //printf("inside if");
    last=n;
    last->next=last;
    last->prev=last;
    //printf("%d",last);
  }
  else
  {
    //printf("inside else");
    last->next->prev=n;
    a=last->next;
    last->next=n;
    n->prev=last;
    n->next=a;
    last=n;
    //printf("%d",last);
  }
}
void viewlist()
{
  struct node *t;
//  printf("%d",last);
  if(last==NULL)
  {
    printf("invalid");
  }
  else{
    t=last->next;
    //t=t->next;
  //while(t!=last->next)
  do
  {
  //  printf("inside loop");
    printf("%d ",t->info);
    //printf("next %d \n",t->next->info);
    //printf("previous %d \n",t->prev->info);
    t=t->next;
  }
  while(t!=(last->next));


  }


}

void backwardview()
{
  struct node *t;
  if(last==NULL)
  {
    printf("invalid");
  }
  else
  {
    t=last;
    //printf("Inside else");
    //printf("%d\n",t->prev);
    //printf("%d\n",t->prev->info);
    //printf("%d\n",t->next);
    //printf("%d\n",t->next->info);
    //printf("%d\n",t);
    //printf("%d\n",t->info);
    do
    {
      printf("%d ",t->info);
      t=t->prev;
    }
    while(t!=last);
  }
}

void viewpos()
{
  int a,b,d;
  struct node *t;
  printf("Enter position to be printed");
  scanf("%d",&a);
  //printf("%d",c);
  //a%c=b;
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
      printf("%d",t->info);
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
  printf("invalid");
  else{
  n=(struct node*)malloc(sizeof(struct node));
  printf("Enter number");
  scanf("%d",&e);
  n->info=e;
  printf("Enter the postion");
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
      printf("postion found");
      break;
    }
    t=t->next;
  }

 temp=t;

 n->pos=temp->pos;
// t=t->next;
printf("Last is %d",last);
//if(t==last nex)
 do{
   printf("\nOld postion %d\n",t->pos);
   t->pos=(t->pos)+1;
   printf("New postion %d\n",t->pos);
   printf("t was %d\n",t);
   t=t->next;
   printf("t is %d\n",t);
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
  printf("Enter element's postion to be deleted");
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
  //if(t==last->next)
  //t->pos=(t->pos)-1;
    while(t!=last->next){
      printf("Inside while for pos");
      printf("\nnum considered is %d\n",t->info);
      printf("Old postion %d\n",t->pos);
       t->pos=(t->pos)-1;
       printf("New postion %d\n",t->pos);
       printf("t was %d\n",t);
       t=t->next;
       printf("t is %d\n",t);
     }
     //while(t!=last->next);
     if(temp==last)
     last=temp->prev;
     if(last->next==last)
      {
        printf("Inside if");
        last=NULL;
        //printf("last pos is %d",last->pos);
        printf("%d",t->pos);
      }
     temp->prev->next=temp->next;
     temp->next->prev=temp->prev;
     temp->next=NULL;
     temp->prev=NULL;
     free(r);

}
}

int menu(){
int ch;
printf("\n1 Add Value to list at last position");
printf("\n2 View List");
printf("\n3 Backward view");
printf("\n4 View element at a position");
printf("\n5 Insert at a position");
printf("\n6 Delete Value at a position");
printf("\n0 Exit");
printf("\n\nEnter your choice");
scanf("%d",&ch);
return ch;
}

int main()
{
//  static int c=0;
  while(1)
  {
    switch(menu())
    {
      case 1:insertback();
           break;
      case 2:viewlist();
           break;
      case 3:backwardview();
           break;
      case 4:viewpos();
          break;
      case 5:insertpos();
           break;
      case 6:deletepos();
          break;
      case 0: exit(0);
      default:printf("invalid");
    }
  }
}
