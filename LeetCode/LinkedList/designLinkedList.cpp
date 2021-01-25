class MyLinkedList {
public:
    class Node{
       public: int val;
               Node* next;
    };
    Node* head=NULL;
    /** Initialize your data structure here. */
    MyLinkedList() {
        head=NULL;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node *t=head;
        int c=0;
        int ans=-1;
        while(t!=NULL)
        {
            if(c==index)
                ans=t->val;
            t=t->next;
            c++;
        }
        return ans;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(head==NULL)
        {
            head=new Node;
            head->val=val;
            head->next=NULL;
            return;
        }
        cout<<"test"<<endl;
        Node* t=new Node;
        t->val=val;
        t->next=head;
        head=t;
        return;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(head==NULL)
        {
            head=new Node;
            head->val=val;
            head->next=NULL;
            return;
        }
        Node *t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=new Node;
        t=t->next;
        t->val=val;
        t->next=NULL;
        return;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
            int c=0;
            Node* t=head,*prev=NULL;
            if(index==0){
                addAtHead(val);                        
            }
            else
            {
                int f=0;
                while(t!=NULL)
                {
                    if(c==index)
                    {
                        Node *n=new Node;
                        prev->next=n;
                        n->val=val;
                        n->next=t;
                        f=1;
                        break;
                    }
                    prev=t;
                    t=t->next;
                    c++;
                }
                
                if(c==index && f==0)
                {
                    Node *n=new Node;
                    prev->next=n;
                    n->val=val;
                    n->next=NULL;
                }
            }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(head==NULL)
            return;
        int c=0;
        Node* prev=NULL,*t=head;
        while(t!=NULL)
        {
            if(c==index)
            {
                Node*temp=t;
                if(prev==NULL)
                {
                    head=t->next;
                    delete(temp);
                }
                else
                {
                    prev->next=t->next;
                    delete(temp);
                }
                break;
            }
            prev=t;
            t=t->next;
            c++;
        }
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */