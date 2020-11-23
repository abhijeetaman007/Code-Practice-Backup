#include <iostream>

using namespace std;
class poly{
    class PNode{
public: int exp,coef;
PNode *link;
};
PNode *head=NULL,*tail=NULL;
public:
void add_term(int e,int c);
 void disp();

};
void poly::add_term(int e,int c){
    if(head){
            tail->link=new PNode;
            tail=tail->link;
            tail->exp=e;
            tail->coef=c;
            tail->link=NULL;return;
            }
            head=tail=new PNode;
            head->exp=e;
            head->coef=c;
            head->link=NULL;
}
void poly::disp(){
    PNode *t=head;
    while(t){
            if(t->coef>0&&t!=head&&t->exp!=0)
        cout<<"+"<<t->coef<<"X"<<t->exp;
        else {if(t->exp!=0)
            cout<<t->coef<<"X"<<t->exp;
             else {if (t->coef>0) cout<<"+"<<t->coef;
             else  cout<<t->coef;}}
        t=t->link ;
    }
}
int main()
{
    poly p1;
    p1.add_term(6,2);//2x6
    p1.add_term(4,-7);  //7x4
    p1.add_term(3,5);//5x3
    p1.add_term(1,1); //x
    p1.add_term(0,1); //1
    p1.disp();
    return 0;
}
