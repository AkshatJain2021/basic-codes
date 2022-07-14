class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode*newhead=new ListNode(-1);
         ListNode*tail=newhead;
        int num=0;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry )
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            num=sum%10;
            tail->next=new ListNode(num);
            tail=tail->next;
        }
        newhead=newhead->next;
        return newhead;
    }
};