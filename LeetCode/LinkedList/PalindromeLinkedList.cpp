bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        if(head->next==NULL)
            return true;
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *p=slow;
        ListNode *curr=slow->next,*n=NULL;
        if(curr->next!=NULL)
            n=curr->next;
        slow->next=NULL;
        while(curr!=NULL)
        {
            curr->next=p;
            p=curr;
            curr=n;
            if(n!=NULL)
            n=n->next;
        }
        bool flag=true;
        curr=p;
        while(head!=NULL && curr!=NULL)
        {
            if(head->val==curr->val)
            {
                head=head->next;
                curr=curr->next;
            }
            else
            {
                flag=false;
                break;
            }
        }
        return flag;       
    }
