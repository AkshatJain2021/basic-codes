class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>output;
        if(root==NULL)
            return output;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int cursize=q.size();
            long int sum=0;
            for(int i=0;i<cursize;i++)
            {
                TreeNode*front=q.front();
                sum+=front->val;
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
                q.pop();
            }
            output.push_back((1.0*sum)/cursize);
        }
        return output;
    }
};