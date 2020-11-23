#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct node{
  int m;
  int n1;
  struct node *next;
  struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;

node* createnode(){
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}
void enqueue(){
  //cout<<"Inside Enqueue"<<endl;
  int house,num;
  int flag=0;
  node *curr;
  cin>>house>>num;
  static int flag1=0,flag2=0,flag3=0,flag4=0;
  if(flag1==0 && house==1)
  flag1=1;
  if(flag2==0 && house==2)
  flag2=1;
  if(flag3==0 && house==3)
  flag3=1;
  if(flag4==0 && house==4)
  flag4=1;

  node *n=createnode();
  n->m=house;
  n->n1=num;
  if(head==NULL)
  {
    n->prev=NULL;
    n->next=NULL;
    head=n;
    tail=n;
    return ;
  }
  else
  {
    curr=tail;
    while(curr!=NULL)
    {
      //cout<<"Inside Else While"<<endl;
    /*  if(flag1==0||flag2==0||flag3==0||flag4==0)
      {
        tail->next=n;
        n->next=NULL;
        n->prev=tail;
        tail=n;
        break;
      }*/
      if(house==1 && flag1==0)
      {
        tail->next=n;
        n->next=NULL;
        n->prev=tail;
        tail=n;
        break;
      }
      if(house==2 && flag2==0)
      {
        tail->next=n;
        n->next=NULL;
        n->prev=tail;
        tail=n;
        break;
      }
      if(house==3 && flag3==0)
      {
        tail->next=n;
        n->next=NULL;
        n->prev=tail;
        tail=n;
        break;
      }
      if(house==4 && flag4==0)
      {
        tail->next=n;
        n->next=NULL;
        n->prev=tail;
        tail=n;
        break;
      }
      if((curr->m==house)&&((curr->next)!=NULL))
      {
        //cout<<"Inside if 1"<<endl;
        node *temp;
        temp=curr->next;
        //if(curr->next!=NULL)
        curr->next=n;
        n->next=temp;
        temp->prev=n;
        n->prev=curr;
        flag=1;
        break;
      }
      curr=curr->prev;
    }
    if(flag==0)
    {
      //cout<<"Inside If 2"<<endl;
      tail->next=n;
      n->next=NULL;
      n->prev=tail;
      tail=n;
    }
  }
}

void dequeue()
{
  node *t;
  t=head;
  cout<<head->m<<" "<<head->n1<<endl;
  head=head->next;
  free(t);
}

int main(){
  int q;
  char s,s1='D',s2='E';
  cin>>q;
  while(q--){
    cin>>s;
    if(s==s2)
    enqueue();
    if(s==s1)
    dequeue();
  }
}
