class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int cursize=q.size();
            vector<int>v2;
            for(int i=0;i<cursize;i++)
            {
                TreeNode*front=q.front();
                q.pop();
                if(front->right!=NULL)
                    q.push(front->right);
                if(front->left!=NULL)
                    q.push(front->left);
                v2.push_back(front->val);
            }
            v.push_back(v2[0]);
        }
        return v;
    }
};