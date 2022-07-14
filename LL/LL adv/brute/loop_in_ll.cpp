class Solution {
public:
    bool hasCycle(ListNode *head) {
    vector<ListNode*>v;
        while(head!=NULL)
        {
            if(find(v.begin(),v.end(),head)!=v.end())
            {
                return true;
                break;
            }
            v.push_back(head);
            head=head->next;
        }
        return false;
    }
};