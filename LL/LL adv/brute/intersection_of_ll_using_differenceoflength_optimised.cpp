int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int len1=0,len2=0;
    Node*temp1=head1;
    Node*temp2=head2;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1!=NULL)
        {
            len1++;
            temp1=temp1->next;
        }
        if(temp2!=NULL)
        {
            len2++;
            temp2=temp2->next;
        }
    }
    int diff=abs(len1-len2);
    temp1=head1;
    temp2=head2;
    if(len1>=len2)
    {
        while(diff)
        {
            temp1=temp1->next;
            diff--;
        }
    }
    else{
        while(diff)
        {
            temp2=temp2->next;
            diff--;
        }
    }
    while(temp1!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}

