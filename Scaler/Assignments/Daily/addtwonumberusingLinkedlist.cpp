ListNode *head=NULL,*tail=NULL;
    int sum=0,carry=0;
    while(A!=NULL || B!=NULL || carry>0)
    {
        if(A!=NULL) sum+=A->val;
        if(B!=NULL) sum+=B->val;
        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        ListNode* newNode=new ListNode(sum);
        if(tail==NULL)
        {
            head=tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        sum=0;
        if(A!=0)
        A=A->next;
        if(B!=0)
        B=B->next;
    }
    return head;