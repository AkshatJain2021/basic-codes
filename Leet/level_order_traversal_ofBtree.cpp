class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int cursize=q.size();
            vector<int>v2;
            while(cursize){
                TreeNode*top=q.front();
                v2.push_back(top->val);
            if(top->left!=NULL)
                q.push(top->left);
            if(top->right!=NULL)
                q.push(top->right);
                q.pop();
            cursize--;
            }
            v.push_back(v2);
        }
        return v;
    }
};