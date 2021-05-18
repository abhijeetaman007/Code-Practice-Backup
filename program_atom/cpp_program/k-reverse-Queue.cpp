#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
//#include<stack>
using namespace std;
struct node{
  int info;
  struct node *next;
};
node* createnode(){
  node* n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}
void pushback(node **head,node **tail,int a){
  node *n;
  n=createnode();
  n->info=a;
//  printf("Test");
  if(*head==NULL)
  {
    *head=n;
    *tail=n;
    n->next=NULL;
  }
  else
  {
    (*tail)->next=n;
    n->next=NULL;
    *tail=n;
  }
}

int popfront(node **head){
  int a=0;
  node *temp;
  if(*head==NULL)
  {
    printf("empty");
    return -1;
  }
  else
  {
    a=(*head)->info;
    temp=*head;
    *head=(*head)->next;
    free(temp);
  }
  return a;
}
void view(node **head){
  node *t;
  t=*head;
  while(t!=NULL){
    printf("%d ",t->info);
    t=t->next;
  }
  printf("\n");
}

int main(){
  int q,n,k,a,b;
  node *head=NULL;
  node *tail=NULL;
  node *t;
  stack<int> s;
  scanf("%d",&q);
  while(q--){
    scanf("%d",&n);
    if(n==0)
    continue;
    scanf("%d",&k);
    if(k>n)
    k=n;
    if(k==0)
    k=1;
    //printf("value of k %d",k);
  while(n--){
    scanf("%d",&a);
    pushback(&head,&tail,a);
  }
  t=head;

  while(k--){
   //temp=t;
   t=t->next;
   b=popfront(&head);
   s.push(b);
  // t=t->next;
  // free(temp);
  }
  head=t;
  node *head1=NULL,*tail1=NULL;
  while(!s.empty()){
    pushback(&head1,&tail1,s.top());
    s.pop();
  }
  tail1->next=head;
  view(&head1);
  head1=NULL;
  head=NULL;
  tail1=NULL;
  tail=NULL;
}
}
