class Solution {
public:
    void insert(TreeNode*root,set<int>&s)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            s.insert(root->val);
            return;
        }
        insert(root->left,s);
        insert(root->right,s);
        s.insert(root->val);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        insert(root,s);
        if(s.size()==1)
            return -1;
        else{
             set<int>::iterator it;
            int count=0;
            for(it=s.begin();it!=s.end();it++)
            {
                count++;
                if(count==2)
                    return *it;
            }
        }
        return -1;
    }
};