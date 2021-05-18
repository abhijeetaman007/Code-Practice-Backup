#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  node *next;
};
node *head3,*tail3;
node* newnode(int data){
  node *n=(struct node*)malloc(sizeof(struct node));
  n->info=data;
  //printf("New Node created and data is %d\n",n->info);
  return n;
}
void insertback(node **head,node **tail,int data)
{
  node *n;
  n=newnode(data);
  if(*head==NULL){

    *head=n;
    n->next=NULL;
    *tail=n;
    //printf("Inside if\n\n");
  }
  else
  {
    (*tail)->next=n;
    *tail=n;
    (*tail)->next=NULL;
    //printf("Inside else\n\n");
  }
}
node* add(node *head1,node *head2){
  //printf("Inside Add function\n");
  int carry=0,sum=0;
  while(head1!=NULL&&head2!=NULL){
    sum= carry+(head1?head1->info:0)+(head2?head2->info:0);
    //printf("OLD sum is %d\n",sum);
    carry=(sum>=10)?1:0;
    sum=sum%10;
    //printf("sum is %d\n",sum);
    //printf("Carry is %d\n",carry);
    //node *n=newnode(sum);
    insertback(&head3,&tail3,sum);
    tail3->next=newnode(carry);
    tail3->next->next=NULL;
    if(head1)
    head1=head1->next;
    if(head2)
    head2=head2->next;
  }
  return head3;
}
void viewlist(node *head){
 // printf("Inside ViewList\n");
  node*t;
  t=head;
  while(t!=NULL){
    if(t->next==NULL&&t->info==0)
    break;
    else
    printf("%d",t->info);
    t=t->next;
  }
    printf("\n");
}
int main(){
  node *head1=NULL,*head2=NULL,*tail1=NULL,*tail2=NULL,*res;
  int m,n,a,t;
  scanf("%d",&t);
while(t--)
{  scanf("%d",&m);
  scanf("%d",&n);
  while(m--)
  {
    //printf("Inside first while\n");
    scanf("%d",&a);
    insertback(&head1,&tail1,a);
  }
  while(n--){
    //printf("Inside second while\n");
    scanf("%d",&a);
    insertback(&head2,&tail2,a);
  }
  res=add(head1,head2);
  viewlist(res);
  head1=NULL;
  head2=NULL;
  head3=NULL;
  tail1=NULL;
  tail2=NULL;
  tail3==NULL;
}
}
