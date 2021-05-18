
ListNode* mergeTwoLists(ListNode* h1, ListNode* h2)
{
	ListNode *nh=NULL,*nt=NULL;
	if(h1->val<=h2->val)
	{
		nh=nt=h1;
		h1=h1->next;
	}        
	else
	{
		nh=nt=h2;
		h2=h2->next;
	}
	while(h1!=NULL && h2!=NULL)
	{
		ListNode *temp;
		if(h1->data<=h2->data)
		{
			nt->next=h1;
			h1=h1->next;
			nt=nt->next;
		}
		else
		{
			nt->next=h2;
			h2=h2->next;
			nt=nt->next;
		}
	}
	if(h1!=NULL)nt->next=h1;
	if(h2!=NULL)nt->next=h2;
	return nh;

}
