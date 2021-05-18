#include <iostream>

using namespace std;
class Node{
public: int data;
Node* next;
};
class sll{
    Node *head;
    public: sll(){ head=NULL;}
    void create();//Uses loop and makes LL.
    void display();
   void insert_front(int);
    void insert_rear(int);
    void insert_pos(int,int );
    void insert_bef(int,int);//Based on data inserts before an element
    void insert_aft(int,int);//Based on data inserts after an element
    void deletespec(int);//Deletes specific item or element
    Node* search(int);//searches for a node
    void searchp(Node**p,int);//searches for a node
    void delfront();
    void delrear();
    /* delete pos*/

};
void sll::searchp(Node**p,int a){
   Node *cur=head;
    while(cur&&cur->data !=a)
    {
        cur=cur->next;
    }
    *p=cur;
}
void sll::delfront(){

    if(head){ Node *p=head;
            head=head->next;
    delete p;
}
}
Node *sll:: search(int a){
    Node *cur=head;
    while(cur&&cur->data !=a)
    {
        cur=cur->next;
    }
    return cur;
}
void sll::delrear(){
    Node* cur=head,*prev=NULL;
    while(cur&&cur->next!=NULL)
    {
        prev=cur; cur=cur->next;
    }
    if(prev){ prev->next=NULL;delete cur;

}}
void sll::deletespec(int item){
    Node *cur=head,*prev=NULL;
    while(cur&&cur->data !=item){
        prev=cur; cur=cur->next;
    }
    if(prev){
       prev->next=cur->next;
       delete cur;
    }
    else delfront();
}
void sll::insert_pos(int p,int item){

    if(p==1) {insert_front(item);return;}

    Node *cur,*tail;
    int pos=2; tail=head;
   while((p>pos)&&(tail)){
        tail=tail->next; pos++;

   }
   cur=new Node; cur->data = item;
   cur->next=tail->next;
   tail->next=cur;

}
void sll::insert_bef(int b,int item)
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
}
void sll::insert_aft(int a,int item)
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
}
void sll::create(){
    int d;
    Node *cur,*prev=NULL;
    cout<<"enter d =-1 when u want to stop";
    do{
            cout<<"Enter next d";
            cin>>d;
            if(d==-1)break;
            cur=new Node;
            cur->data =d;
            cur->next=NULL;
            if(prev!=NULL) prev->next=cur;
            else head=cur;
            prev=cur;
       }while(d!=-1);
}
void sll::display(){
    Node *cur=head;
    while(cur){
        cout<<cur->data;
        cur=cur->next;
    }
}
void sll::insert_front(int item){
    Node *cur=new Node;
    cur->data = item; cur->next=head;
    head=cur;
}
void sll::insert_rear(int item){
    Node *cur=new Node;
    cur->data = item; cur->next=NULL;
    Node *tail=head;
    while(tail->next!=NULL) tail=tail->next;
    tail->next=cur;
}
int main()
{ sll s1;
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
