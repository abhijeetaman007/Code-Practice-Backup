#include <iostream>

using namespace std;
//Merging two descending ordered Linked
// lists into one linked list

 class Node{
public: int data;
Node* link;
};
void display(Node *head){
    Node *cur=head;
    while(cur){
        cout<<cur->data<<"\t";
        cur=cur->link;
    }
}
void insert_rear(int item,Node **h){
    Node *head=*h;
    Node *tail=NULL;
    Node *temp=new Node;
    temp->data=item;
    temp->link=NULL;
    while(head){
        tail=head; head=head->link;
    }
    if(tail)tail->link=temp;
    else *h=temp;
}

void mergelist(Node *h1,Node *h2,Node**h3){

    Node *ptr1,*ptr2;Node *r=NULL;
    ptr1=h1; ptr2=h2;
  while(ptr1&&ptr2){
    if(ptr1->data>ptr2->data){
        insert_rear(ptr1->data,&r);ptr1=ptr1->link;}
    else if(ptr1->data==ptr2->data) {
    insert_rear(ptr1->data,&r) ;
    insert_rear(ptr1->data,&r);
    ptr1=ptr1->link;
    ptr2=ptr2->link;

    }
    else {
        insert_rear(ptr2->data,&r);
        ptr2=ptr2->link;
    }
    }
    while(ptr1){
        insert_rear(ptr1->data,&r);
        ptr1=ptr1->link;
           }
      while(ptr2){
        insert_rear(ptr2->data,&r);
        ptr2=ptr2->link;
           }
           *h3=r;
  }


int main()
{
    Node *h1=NULL,*h2=NULL;
    insert_rear(90,&h1);
    insert_rear(80,&h1);
    insert_rear(70,&h1);
    insert_rear(60,&h1);
    insert_rear(50,&h1);
    insert_rear(30,&h1);
    display(h1);
    insert_rear(85,&h2);
    insert_rear(55,&h2);
    insert_rear(45,&h2);
    insert_rear(3,&h2);
    insert_rear(1,&h2);
    display(h2);
    Node *h3=NULL;
    mergelist(h1,h2,&h3);
    display(h3);
    return 0;
}
