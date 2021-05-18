#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};
int ct=0;
node* head=NULL;
node* createnode(int val)
{
	node *n=new node;
	n->data=val;
	n->next=NULL;
	return n;
}
void insert_node(int pos, int val) {
    // @params position, integer
    // @params value, integer
        cout<<"insert_node func"<<endl;
        cout<<"count"<<ct<<endl;
    if(pos>ct+1)
    return;
    ct++;
    node* n=createnode(val);
    if(head==NULL)
    {
        cout<<"inside 1"<<endl;
        head=n;
        return;
    }
    if(pos==1)
    {
        cout<<"inside 2"<<endl;

        n->next=head;
        head=n;
        return;
    }
    node* t=head;
    int c=1;
    cout<<"out while"<<endl;
    while(c<pos-1)
    {
        cout<<"inside 3"<<endl;

        cout<<"while"<<endl;
        c++;
        t=t->next;
    }
    node* temp=t->next;
    t->next=n;
    n->next=temp;
    return;
}

void delete_node(int pos) {
    // @params position, integer
    if(head==NULL)
    return;
    if(pos>ct)
    return;
    ct--;
    node *t=head;
    if(pos==1)
    {
        node *temp=head;
        head=head->next;
        delete(temp);
        return;
    }
    if(head->next==NULL)
    {
        node* temp=head;
        delete(temp);
        head=NULL;
        return;
    }
    int c=1;
    while(c<pos-1)
    {
        c++;
        t=t->next;
    }
    node *temp=t->next;
    t->next=temp->next;
    delete(temp);
    return;
}


void print_ll() {
    // Output each element followed by a space
    node* t=head;
    if(head==NULL)
    {
        cout<<"NULL"<<endl;
        return;
    }
	while(t!=NULL)
	{
        // cout<<"in"<<endl;
	    cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;
	return;    
}

int main()
{
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        if(c=='i')
        {
            int a,b;
            cin>>a>>b;
            cout<<"inside insert"<<endl;

            insert_node(a,b);
        }
        if(c=='d')
        {
            int a;
            cin>>a;
            cout<<"inside delete"<<endl;

            delete_node(a);
        }
        if(c=='p')
        {
            // cout<<"inside print"<<endl;
            print_ll();
        }
    }
}