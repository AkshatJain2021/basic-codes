class Solution {
public:
     void colzero(vector<vector<int>>& matrix,int j)
    {
        for(int i=0;i<matrix.size();i++)
        {
            matrix[i][j]=0;
        }
    }
    void rowzero(vector<vector<int>>& matrix,int i)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            matrix[i][j]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>arri;
        vector<int>arrj;
        if(matrix.size()==1 && matrix[0].size()==1)
            return;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    arri.push_back(i);
                    arrj.push_back(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            if(find(arri.begin(),arri.end(),i)!=arri.end())
                rowzero(matrix,i);
            for(int j=0;j<matrix[i].size();j++)
                 if(find(arrj.begin(),arrj.end(),j)!=arrj.end())
                colzero(matrix,j);
                
    }
    }
};