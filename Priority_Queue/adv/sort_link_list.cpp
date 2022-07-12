typedef pair<int,ListNode*> pr;
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head== NULL || head->next==NULL)
            return head;
        priority_queue< pr,vector<pr>,greater<pr>>minh;
         ListNode*temp=head;
        while(temp!=NULL)
        {
            minh.push(make_pair(temp->val,temp));
            temp=temp->next;
        }
         ListNode*newhead=NULL;
         ListNode*tail=NULL;
        while(!(minh.empty()))
        {
            if(newhead==NULL)
            {
                newhead=minh.top().second;
                tail=minh.top().second;
                minh.pop();
            }
            else{
            tail->next=minh.top().second;
            tail=tail->next;
            minh.pop();
            }
        }
        tail->next=NULL;
        return newhead;
    }
};