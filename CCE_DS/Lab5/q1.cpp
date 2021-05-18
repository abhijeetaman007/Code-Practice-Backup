#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
private:
    node *head;
public:

    LinkedList()
    {
        head=NULL;
    }

    void insertbegin(int ele)               //Inserting at start
    {
        node* n=new node;
        n->data=ele;
        if(head==NULL)
        {
            head=n;
            head->next=NULL;
        }
        else
        {
            n->next=head;
            head=n;
        }
    }
    void insertend(int ele)                  //Inserting at end
    {
        node* n=new node;
        n->data=ele;
        if(head==NULL)
        {
            head=n;
            n->next=NULL;
        }
        else
        {
            node* t=head;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=n;
            n->next=NULL;
        }
    }


    void insertbefore(int ele,int x)          //Inserting before a particular element
    {
        node* n=new node;
        n->data=ele;
        node *t=head;
        node* prev=NULL;
        int flag=0;
        if(x==head->data)
        {
            insertbegin(ele);
        }
        else
        {
            while(t!=NULL)
            {
                if(t->data==x)
                {
                    flag=1;
                    if(t->next==NULL)
                        insertend(ele);
                    else
                    {
                        prev->next=n;
                        n->next=t;
                    }
                    break;
                }
                prev=t;
                t=t->next;
            }
            if(flag==0)
            {
                cout<<"Element not present in Linked List"<<endl;
            }
        }
    }

    void insertafter(int ele,int x)          //Inserting after a particular element
    {
        node* n=new node;
        n->data=ele;
        node *t=head;
        int flag=0;
        while(t!=NULL)
        {
            if(t->data==x)
            {
                flag=1;
                n->next=t->next;
                t->next=n;
                break;
            }
            t=t->next;
        }
        if(flag==0)
        {
            cout<<"Element not found"<<endl;
        }

    }

    void deletenode(int x)        //Deleting node with value x
    {
        node* temp;
        node* t=head;
        node* prev=NULL;
        int flag=0;
        if(head->data==x)
        {
            flag=1;
            temp=head;
            head=head->next;
        }
        else
        {
            while(t!=NULL)
            {
                if(t->data==x)
                {
                    flag=1;
                    temp=t;
                    prev->next=t->next;
                    break;
                }
                prev=t;
                t=t->next;
            }
            if(flag==0)
            {
                cout<<"Element not found"<<endl;
            }
            else
                delete temp;
        }
    }

    void display()                  //Traversing and printing linkedlist
    {
        node* t=head;
        while(t!=NULL)
        {
            cout<<t->data<<" ";
            t=t->next;
        }
    }
};
int main()
{
    LinkedList L;
    //MENU DRIVEN PROGRAM TO IMPLEMENT THE OPERATIONS
    int choice;
    cout<<"THE FOLLOWING OPERATIONS CAN BE PERFORMED ON THE LINKED LIST:"<<endl;
    cout<<"1.Insert Begin"<<endl;
    cout<<"2.Insert End"<<endl;
    cout<<"3.InsertBefore"<<endl;
    cout<<"4.InsertAfter"<<endl;
    cout<<"5.Delete"<<endl;
    cout<<"6.Display"<<endl;
    cout<<"-1.Exit"<<endl;
    while(true)
    {
        cout<<">";
        int x,y;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter element for input"<<endl;
            cin>>x;
            L.insertbegin(x);
            break;
        case 2:
            cout<<"Enter element for input"<<endl;
            cin>>x;
            L.insertend(x);
            break;
        case 3:
            cout<<"Enter element and element before which insertion has to take place"<<endl;
            cin>>x;
            cin>>y;
            L.insertbefore(x,y);
            break;
        case 4:
            cout<<"Enter element and element after which insertion has to take place"<<endl;
            cin>>x;
            cin>>y;
            L.insertafter(x,y);
            break;
        case 5:
            cout<<"Enter data to be deleted"<<endl;
            cin>>x;
            L.deletenode(x);
            break;

        case 6:
            cout<<"Display Matrix"<<endl;
            L.display();
            break;

        case -1:
            return 0;
        default:
            cout<<"Invalid Choice!"<<endl;
        }
    }
}
