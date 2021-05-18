#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct node{
  int info;
  node *next;
  node *prev;
};

struct node *START=NULL;
void insertlast()
{
  struct node *n,*t;
  n=(struct node*)malloc(sizeof(struct node));
  printf("Enter a number");
  scanf("%d",&n->info);
  t=START;
  if(START==NULL)
  {
    START=n;
    n->next=NULL;
    n->prev=NULL;
  }
  else
  {
    while(t->next!=NULL)
    {
      t=t->next;
    }
    t->next=n;
    n->prev=t;
    n->next=NULL;
  }
}
int main(){
  int q,n,c=0,max;
  node *t=NULL,*temp=NULL;
  list<int> area;
  scanf("%d",&q);
  while(q--){
    scanf("%d",&n);
  while(n--){
  //  scanf("%d",&n);
    insertlast();
  }
  printf("outside loop\n");
  t=START;
  while(t!=NULL){
    c=0;
    temp=t;
    printf("Inside first while\n");
    while((t->info)>=(temp->info)){
     printf("Inside second while\n");
     printf("t->info is %d\n",t->info);
     printf("temp->info is %d\n",temp->info);
      c=c+1;
      if(t->prev!=NULL)
      t=t->prev;
      else
      break;
    }
    t=temp;
    while((t->info)>=(temp->info)){
      printf("Inside third while\n");
      printf("t->info is %d\n",t->info);
      printf("temp->info is %d\n",temp->info);
      c=c+1;
      //t=t->next;
      if(t->next!=NULL)
      t=t->next;
      else
      break;
    }
    c=c-1;
    printf("\nArea is %d\n",c*(temp->info));
   area.push_back(c*(temp->info));
   t=temp->next;
  }
  area.sort();
  printf("%d\n",area.back());
  START=NULL;
  area.clear();

}
}
