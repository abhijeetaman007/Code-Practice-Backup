#include <iostream>

using namespace std;
class PNode{
public: int exp,coef;
PNode *link;};
class poly{


public:
    PNode *head=NULL,*tail=NULL;
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
    cout<<endl;
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
poly polyadd(poly p1,poly p2){
    PNode *ptr1=p1.head;
    PNode *ptr2=p2.head;
    poly p3;
    while(ptr1&&ptr2){
        if(ptr1->exp>ptr2->exp){
            p3.add_term(ptr1->exp,ptr1->coef);
            ptr1=ptr1->link;

        }
        else if(ptr1->exp<ptr2->exp)
            {
            p3.add_term(ptr2->exp,ptr2->coef);
            ptr2=ptr2->link;

        }
        else{
            p3.add_term(ptr1->exp,ptr1->coef+ptr2->coef);
            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }
    }
    while(ptr1){
            p3.add_term(ptr1->exp,ptr1->coef);
            ptr1=ptr1->link;

        }
     while(ptr2){
            p3.add_term(ptr2->exp,ptr2->coef);
            ptr2=ptr2->link;

        }
  return p3;
}
int main()
{
    poly p1;
    p1.add_term(8,7);  //7x8
    p1.add_term(3,5);//5x3
    p1.add_term(1,1); //x
    p1.add_term(0,1); //1
    p1.disp();
    poly p2;
    p2.add_term(10,2);//2x10
    p2.add_term(8,2);//2x8
    p2.add_term(7,3);//3x7
    p2.add_term(3,4);//4x3
    p2.disp();
    poly p3=polyadd(p1,p2);
    p3.disp();
        return 0;
}

