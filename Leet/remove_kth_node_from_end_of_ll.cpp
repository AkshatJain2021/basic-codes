class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int leng=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            leng++;
        }
        int toreach=leng-n;
        if(!toreach)
        {
            head=head->next;
            return head;
        }
        temp=head;
        while(toreach!=1)
        {
            temp=temp->next;
            toreach--;
        }
        ListNode*del=temp->next;
        temp->next=temp->next->next;
        delete del;
        return head;
    }
};