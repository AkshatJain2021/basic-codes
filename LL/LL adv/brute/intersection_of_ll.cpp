class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*>v;
        while(headA!=NULL || headB!=NULL)
        {
            if(headA!=NULL)
            {
                if(find(v.begin(),v.end(),headA)!=v.end())
                {
                    return headA;
                }
                else{
                    v.push_back(headA);
                    headA=headA->next;
            }
            }
            else if(headB!=NULL)
            {
                if(find(v.begin(),v.end(),headB)!=v.end())
                {
                    return headB;
                }
                else{
                    v.push_back(headB);
                    headB=headB->next;
            }
            }
        }
        return NULL;
    }

};