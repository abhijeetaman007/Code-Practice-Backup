#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
  node *prev;
};
void krev(node *head, node *tail,int k){
  node *t,*temp;
  int c=1,n;
//  printf("Inside krev\n");
  t=head;
  while(t!=NULL){
    n=c%k;
    //printf("The present info is %d",t->info);
  //  printf("Inside While\n");
    temp=t;
    //printf("count is %d\n",c);
    if(n==0){
      //temp=t;
      //printf("Inside if\n");
    while(t!=head){
      //printf("Inside do while 1\n");
      printf("%d ",t->info);
      t=t->prev;
    }
    if(t==head)printf("%d ",t->info);
    //printf("The present info is %d",t->info);
    t=temp;
    //c=0;
    head=temp->next;
    //printf("Head 1 is %d\n",head);
  }
   if(t->next==NULL&&head!=NULL){
     //printf("Head 1 is %d\n",head);
     //printf("t is %d   %d\n",t,t->info);
     while(t!=head){
       //printf("Inside do while 2\n");
       printf("%d ",t->info);
       t=t->prev;
     }
     if(t==head)printf("%d",t->info);
     break;
   }
   c=c+1;
   if(t->next)
   t=t->next;
   else
   break;
}
}
int main(){
  int k,a;
  node *head=NULL,*tail=NULL;

  while(1){
    scanf("%d",&a);
    if(a!=-1)
    {
      node *n;
      n=(struct node*)malloc(sizeof(struct node));
      n->info=a;
      if(head==NULL)
      {
        n->next=NULL;
        n->prev=NULL;
        head=n;
        tail=n;
      }
      else
      {
        tail->next=n;
        n->prev=tail;
        tail=n;
        tail->next=NULL;
      }
    }
    else
    break;
  }
  scanf("%d",&k);
  krev(head,tail,k);
}
