class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     if(mat==target)
     {
         return true;
     }
        int m=mat.size();
        int n=mat[0].size();
        int count=3;
        while(count--)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=i;j<n;j++)
                {
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<m;i++)
            {
                reverse(mat[i].begin(),mat[i].end());
            }
            if(mat==target)
                return true;
        }
        return false;
    }
};