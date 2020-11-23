#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node* createnode(){
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}
void pushback(int a){
  node *n=createnode();
  n->info=a;
  if(head==NULL){
    head=n;
    tail=n;
    n->next=NULL;
  }
  else{
    tail->next=n;
    n->next=NULL;
    tail=n;
  }
}
void popfront(){
  node *temp;
  int a;
  //printf("head is %d",head);
  if(head==NULL){
    printf("empty\n");
    }
  else
  {
    a=head->info;
    temp=head;
    head=head->next;
    free(temp);
  }
}
void frontelement(){
  if(head!=NULL){
    printf("%d\n",head->info);
  }
  else{
    printf("empty\n");
  }
}
int main(){
  int q,ch,a,b;
  scanf("%d",&q);
  head=NULL;
  while(q--){
    scanf("%d",&ch);
    switch(ch){
      case 1:scanf("%d",&a);
             pushback(a);
             break;
      case 2:popfront();
            break;
      case 3:frontelement();
      break;
    }
  }
}
