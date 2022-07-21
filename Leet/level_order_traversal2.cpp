class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v2;
            int cursize=q.size();
            while(cursize)
            {
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
        reverse(v.begin(),v.end());
        return v;
    }
};