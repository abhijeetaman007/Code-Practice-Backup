#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *next;
};
struct node *START=NULL;
int main()
{
  int a;
  struct node *n,*t,*temp;
    while(1)
    {
      scanf("%d",&a);
      if(a!=-1){
      n=(struct node*)malloc(sizeof(struct node));
      //printf("The value of n %d\n",n);
      t=n;
      n->info=a;
      if(START==NULL)
      {
        START=n;
        n->next=NULL;
        temp=n;
        //n->next=NULL;
        //printf("temp form if %d\n",temp);
      }
      else{
      //temp=n;
      //n->next=NULL;
      temp->next=n;
      temp=n;
      n->next=NULL;
      //printf("temp from else %d\n",temp);
      }
     }
  else
  break;
}

  struct node *sp,*fp;
  sp=START;
  fp=START;
  while(fp!=NULL&&fp->next!=NULL&&fp->next->next!=NULL)
  {
   //printf("Inside While");
    sp=sp->next;
    fp=fp->next->next;
  }
//  printf("%d",fp->info);
  printf("%d",sp->info);
}
