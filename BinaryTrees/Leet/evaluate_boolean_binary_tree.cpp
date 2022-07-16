class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==0)
                return false;
            else
                return true;
        }
        if(root->left!=NULL && root->right!=NULL)
        {
            if(root->val==2)
            {
                bool ans1=evaluateTree(root->left);
                bool ans2=evaluateTree(root->right);
                return ans1||ans2;
            }
            if(root->val==3)
            {
                bool ans1=evaluateTree(root->left);
                bool ans2=evaluateTree(root->right);
                return ans1&&ans2;
            }
        }
        return true;
    }
};