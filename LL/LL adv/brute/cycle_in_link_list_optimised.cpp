Node *firstNode(Node *head)
{
	//    Write your code here.
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
            break;
    }
    if(fast==NULL || fast->next==NULL)
        return NULL;
    Node*dummy=head;
    while(dummy!=slow)
    {
        dummy=dummy->next;
        slow=slow->next;
    }
    return dummy;
}