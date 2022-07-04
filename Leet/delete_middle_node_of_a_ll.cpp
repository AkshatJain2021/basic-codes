class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return NULL;
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        ListNode*slow=head;
        ListNode*fast=head->next->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*prev=slow;
        ListNode*attach=slow->next->next;
        prev->next=attach;
        return head;
    }
};