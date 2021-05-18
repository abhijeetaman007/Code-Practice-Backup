#include <iostream>

using namespace std;
class queuesll{
    class Node{
    public: int data;
    Node *next;
    };
    Node *f=NULL,*r=NULL;
    public:
        void enque(int item);
        int dequeue();
        void disp();

};
void queuesll::enque(int item){
    Node *t=new Node;
    t->data =item;
    t->next=NULL;
    if(r)r->next=t;
    r=t;if(!f)f=t;
}
int queuesll:: dequeue(){
    if(!f) return -1;
    Node *t=f;
    f=f->next; int k=t->data;
    delete t;
    return k;
}
void queuesll::disp(){
    Node*t=f;
    if(f){
    do{
       cout<<t->data; t=t->next;
    }
    while(t);

    }
}
int main()
{
  int op,item;
    queuesll q;
    do{
        cout<<"1:add,2:del,3:display 4:exit";
        cin>>op;
        switch(op){
    case 1:cout<<"Enter item";
           cin>>item;
           q.enque(item);
           break;
    case 2: cout<<q.dequeue();break;
    case 3: q.disp(); break;
    case 4: return 0;

        }

    }while(op!=4);

}
