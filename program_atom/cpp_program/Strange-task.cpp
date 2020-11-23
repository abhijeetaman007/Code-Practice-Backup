#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
struct node{
  int info;
  int index;
  struct node *next;
  struct node *prev;
};
node *head=NULL;
node *tail=NULL;
node* createnode(){
  node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}
void insertback(int a){
  node *n;
  static int c;
  n=createnode();
  n->info=a;
  if(head==NULL){
    n->next=NULL;
    n->prev=NULL;
    head=n;
    tail=n;
    c=1;
    n->index=c;
    //printf("%d",n->info);
  }
  else
  {
    tail->next=n;
    n->next=NULL;
    n->prev=tail;
    tail=n;
    c=c+1;
    n->index=c;
  //  printf("%d",n->info);
  }
  //printf("The count is %d",n->index);
}

int main(){
  int q,x,y,a,n;
  node *curr;
  node *left;
  node *right;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&a);
    insertback(a);
  }
  curr=head;
  left=head;
  right=head;
  while(curr!=NULL){
x=-1;
    while(right!=NULL){
       if((right->info)>(curr->info)){
         x=right->index;
         break;
       }
       right=right->next;
    }
y=-1;
    while(left!=NULL){
      if((left->info)>(curr->info)){
        y=left->index;
        break;
      }
      left=left->prev;
    }
    printf("%d ",x+y);

  curr=curr->next;
  left=curr;
  right=curr;
}
}
