#include <iostream>

using namespace std;
class stacksll{

class Node{
public: int data;
    Node *next;
};

Node *top=NULL;
public:
void push(int item);
int pop();
void disp();
};
void stacksll::push(int item){
    //create new node
    Node *temp=new Node;
    temp->data = item;
    temp->next=top;
    top=temp;
}

int stacksll::pop(){
    if(top) {
        int k=top->data;
        Node *t=top;
        top=top->next;
        delete t;
        return k;
    }
    else return -1;}
void stacksll::disp(){
    Node*t=top;
    while(t){
        cout<<t->data;
        t=t->next;
    }
}
int main()
{
    int op,item;
    stacksll s1;
    do{
        cout<<"1:push,2:pop,3:display 4:exit";
        cin>>op;
        switch(op){
    case 1:cout<<"Enter item";
           cin>>item;
           s1.push(item);
           break;
    case 2: cout<<s1.pop();break;
    case 3: s1.disp(); break;
    case 4: return 0;

        }

    }while(op!=4);

}
