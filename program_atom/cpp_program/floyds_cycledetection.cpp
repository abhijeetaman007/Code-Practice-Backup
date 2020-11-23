// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 //To find a loop in linked list
bool has_cycle(SinglyLinkedListNode* head) {
    //int flag=0;
    struct SinglyLinkedListNode *p,*q;
    p=head;
    q=head;
    //t=head;
    while(p&&q&&q->next)
    {
        p=p->next;
        q=q->next->next;
            if(p==q)
            return 1;
            }
    return 0;
}

node* start_loop(node *p, node*head)//here p is what we get from above function.
{
  node *q=head;
  while(p!=q)
  {
    p=p->next;
    q=q->next;
  }
  return p;
}
