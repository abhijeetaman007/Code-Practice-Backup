#include <iostream>

using namespace std;
class Node{
public: int data;
Node* next,*prev;
};
class dll{
    Node *head;
    public: dll(){ head=NULL;}
    void create();
    void display();
   void insert_front(int);
    void insert_rear(int);
    void insert_pos(int,int );
    void insert_bef(int,int);
    void insert_aft(int,int);
    void deletespec(int);
    Node* search(int);//searches for a node
    void searchp(Node**p,int);//searches for a node
    void delfront();
    void delrear();
    /* delete pos*/

};
void dll::searchp(Node**p,int a){
   Node *cur=head;
    while(cur&&cur->data !=a)
    {
        cur=cur->next;
    }
    *p=cur;
}
void dll::delfront(){

    if(head){ Node *p=head;
            head=head->next;
            if(head)
            head->prev=NULL;
    delete p;
}
}
Node *dll:: search(int a){
    Node *cur=head;
    while(cur&&cur->data !=a)
    {
        cur=cur->next;
    }
    return cur;
}
void dll::delrear(){
    Node* cur=head;
    while(cur&&cur->next!=NULL)
    {
        cur=cur->next;
    }
    Node*p=cur->prev;
    if(p){ p->next=NULL;delete cur;

}else {head=NULL; delete cur;}
}
void dll::deletespec(int item){
    Node *cur=head,*p=NULL;
    while(cur&&cur->data !=item){
        p=cur; cur=cur->next;
    }
    if(p){
       p->next=cur->next;
       cur->next->prev=p;
       delete cur;
    }
    else delfront();
}
void dll::insert_pos(int p,int item){

    if(p==1) {insert_front(item);return;}

    Node *cur,*tail;
    int pos=2; tail=head;
   while((p>pos)&&(tail)){
        tail=tail->next; pos++;

   }
   cur=new Node; cur->data = item;
   cur->next=tail->next;
   tail->next=cur;
   cur->prev=tail;
   if(cur->next)
   cur->next->prev=cur;

}
void dll::insert_bef(int b,int item)
{
  Node *cur,*tail;
  cur=head; if ((head)&&(head->data ==b))
  {insert_front(item);return;}
  while((cur->data!=b)&&(cur)) {
    tail=cur; cur=cur->next;
  }
  cur=new Node;
  cur->data = item;
  cur->next=tail->next;
  tail->next = cur;
  cur->prev=tail;
  if(cur->next) cur->next->prev=cur;
}
void dll::insert_aft(int a,int item)
{
  Node *cur,*tail;
  tail=head;
  while((tail->data!=a)&&(tail)) {
     tail=tail->next;
  }
  cur=new Node;
  cur->data = item;
  cur->next=tail->next;
  tail->next = cur;
  cur->prev=tail;
  if(cur->next) cur->next->prev=cur;
}
void dll::create(){
    int d;
    Node *cur,*p=NULL;
    cout<<"enter d =-1 when u want to stop";
    do{
            cout<<"Enter next d";
            cin>>d;
            if(d==-1)break;
            cur=new Node;
            cur->data =d;
            cur->next=NULL;
            cur->prev=p;
            if(p!=NULL) p->next=cur;
            else head=cur;
            p=cur;
       }while(d!=-1);
}
void dll::display(){
    Node *cur=head;
    while(cur){
        cout<<cur->data;
        cur=cur->next;
    }
}
void dll::insert_front(int item){
    Node *cur=new Node;
    cur->data = item; cur->next=head;
    cur->prev=NULL;
    if(head)head->prev=cur;
    head=cur;
}
void dll::insert_rear(int item){
    Node *cur=new Node;
    cur->data = item; cur->next=NULL;
    Node *tail=head;
    while(tail->next!=NULL) tail=tail->next;
    tail->next=cur;
    cur->prev=tail;
}
int main()
{ dll s1;
    int op,item,a,b,pos;
   do{
    cout<<"1:create, 2:display, 3:insert_front";
    cout<<"4:insert_rear, 5:insert_pos 6:insert_bef,";
    cout<<"7:insert_aft , 8:delfront 9:delrear";
    cout<<"10:search , 11:searchp 12:delspec";
    cin>>op;
    switch(op){
        case 1:s1.create(); break;
        case 2: s1.display(); break;
        case 3:cout<<"Enter item to insert";
               cin>>item;
            s1.insert_front(item); break;
         case 4:cout<<"Enter item to insert";
               cin>>item;
            s1.insert_rear(item); break;
         case 5:cout<<"Enter item to insert";
               cin>>item;
               cout<<"Enter pos";
               cin>>pos;
            s1.insert_pos(pos,item); break;
         case 6: cout<<"Enter item to insert";
               cin>>item;
               cout<<"Enter before which item";
               cin>>b;
            s1.insert_bef(b,item); break;
         case 7:cout<<"Enter item to insert";
               cin>>item;
               cout<<"Enter after which item";
               cin>>a;
            s1.insert_aft(a,item); break;
        case 8:s1.delfront(); break;
        case 9:s1.delrear(); break;
        case 10: {cout<<"enter elt";cin>>item;
                 Node *n=s1.search(item);
                 if(n) cout<<n->data <<"present";
                 else cout<<"No data";}
                 break;
        case 11:{
                 cout<<"enter elt";cin>>item;
                 Node *n=NULL;
                 s1.searchp(&n,item);
                 if(n) cout<<n->data <<"present";
                 else cout<<"No data";}
                 break;
        case 12:cout<<"enter elt";cin>>item;
        s1.deletespec(item); break;
        case 13:break;

    }
   }while(op!=13);
    return 0;
}
