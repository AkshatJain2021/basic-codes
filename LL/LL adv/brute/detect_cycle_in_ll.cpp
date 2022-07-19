class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        unordered_map<ListNode*,int>mp;
        while(head!=NULL)
        {
            mp[head]++;
            if(mp[head]==2)
                return head;
            head=head->next;
        }
        return NULL;
    }
};