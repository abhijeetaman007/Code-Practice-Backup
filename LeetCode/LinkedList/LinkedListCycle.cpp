bool hasCycle(ListNode *head) {
	ListNode *slow=head,*fast=head;
	while(slow!=fast && fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next;
	}        
	if(fast==NULL)
		return false;
	return true;
}