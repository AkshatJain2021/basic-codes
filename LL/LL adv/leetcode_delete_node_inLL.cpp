class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*temp=node;
        while(temp!=NULL)
        {
            
            if(temp->next->next==NULL)
            {
                temp->val=temp->next->val; 
                temp->next=NULL;
                break;
            }   
            temp->val=temp->next->val;
            temp=temp->next;
        }
    }
};