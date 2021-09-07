/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head) {
    if(head==NULL)
    return head;
    if(head->next==NULL)
    return head;
    ListNode *prev=NULL,*curr=head;
    ListNode *n=curr->next;
    while(curr!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=n;
        if(n!=NULL)
        n=n->next;
    }
    return prev;
}
