#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
  int info;
  node *next;
};
struct node *START=NULL;
struct node *END=NULL;
int insertnode(int a)
{ int i=0;
  static int num=0;
  struct node *n,*t;
  n=(struct node*)malloc(sizeof(struct node));
  n->info=a;
  //printf("Test  %d\n",n->info);
  if(START==NULL){
    START=n;
    END=n;
    n->next=NULL;
    //printf("Test  %d\n",n->next);
   num=n->info;
  }
  else{
    END->next=n;
    END=n;
    END->next=NULL;
   num=num*10+n->info;
  }
 // printf("Num is %d\n",num);
  return num;
}
int insert_node(int a)
{ int i=0;
  static int num=0;
  struct node *n,*t;
  n=(struct node*)malloc(sizeof(struct node));
  n->info=a;
  //printf("Test  %d\n",n->info);
  if(START==NULL){
    START=n;
    END=n;
    n->next=NULL;
   // printf("Test  \n");
   num=n->info;
  }
  else{
    END->next=n;
    END=n;
    END->next=NULL;
   num=num*10+n->info;
  }
  //printf("Num is %d\n",num);
  return num;
}
int revnum(int n){
  int c=0,a=0;
  while(n!=0){
    c=n%10;
    a=a*10+c;
    n=n/10;
  }
  return a;
}
int main(){
  int a,t;
  int m,n;
  int d,e;
  int b,c;
  scanf("%d",&t);

while(t--){
  scanf("%d",&n);
  scanf("%d",&m);
  while(n--)
  {
    scanf("%d",&a);
    //if(a!=-1)
    //{
     b= insertnode(a);
     c=revnum(b);
    //printf("The reverse num is %d\n",c);
    //}
  //  else
    //break;
  }
  START=NULL;
  END=NULL;
  while(m--)
  {
    scanf("%d",&a);
    //if(a!=-1)
    //{
     d=insert_node(a);
     e=revnum(d);
    //printf("The reverse num is %d\n",e);
  //  }
    //else
    //break;
  }
  START=NULL;
  END=NULL;
  int f=c+e;
 // printf("%d",f);
  printf("%d",revnum(f));
   }
}
