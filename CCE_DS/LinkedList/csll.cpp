#include <iostream>

using namespace std;

class Node{
public: int data;
Node* next;
};
class csll{
    Node *head;
    public: csll(){ head=NULL;}
    void create();
    void display();

    void insert_pos(int,int );

   // void deletespec(int);
    Node* search(int);//searches for a node
    };


Node *csll:: search(int a){
    Node *cur=head;
    if(cur==NULL) {return NULL;}
    while(cur->next!=head&&cur->data !=a)
    {
        cur=cur->next;
    }
    if(cur->data==a)
    return cur; else return NULL;
}

void csll::insert_pos(int p,int item){
   Node *cur=new Node; cur->data = item;
   if(p==1){
        cur->next=head;head=cur;
        Node *t=head->next;
        while((t->next!=cur->next)&&t){
            t=t->next;
        }
        t->next=cur;

   }
else{
    int pos=2;
    Node *t=head,*pv=NULL;
    while((t->next!=head )&&(pos<=p)){
        pos++; pv=t;t=t->next;
           }
           if(t->next==head && pos<p)
            {cout<<"No such position";return;}
        if(pos>=p) {
            pv->next=cur;
            cur->next=t;
                    }
}
}

void csll::create(){
    int d;
    Node *cur,*prev=NULL;
    cout<<"enter d =-1 when u want to stop";
    do{
            cout<<"Enter next d";
            cin>>d;
            if(d==-1)break;
            cur=new Node;
            cur->data =d;
            cur->next=head;
            if(prev!=NULL) prev->next=cur;
            else head=cur;
            prev=cur;
       }while(d!=-1);
}
void csll::display(){
    Node *cur=head;
    if(!cur) return;
    while(cur->next!=head){
        cout<<cur->data;
        cur=cur->next;
    }
    cout<<cur->data;
}


int main()
{ csll s1;
    int op,item,pos;
   do{
    cout<<"1:create, 2:display, 3:insert_pos";
    cout<<"4:search 5:exit";
    cin>>op;
    switch(op){
        case 1:s1.create(); break;
        case 2: s1.display(); break;
        case 3:cout<<"Enter item to insert";
               cin>>item;
               cout<<"Enter pos";
               cin>>pos;
            s1.insert_pos(pos,item); break;


        case 4: {cout<<"enter elt";cin>>item;
                 Node *n=s1.search(item);
                 if(n) cout<<n->data <<"present";
                 else cout<<"No data";}
                 break;

        case 5:break;

    }
   }while(op!=5);
    return 0;
}
