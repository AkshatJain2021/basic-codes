class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N=matrix.size();
        int M=matrix[0].size();
         int index=-1;
	    for(int i=0;i<N;i++)
	    {
	        if(matrix[i][0]<=target)
	        {
	            if(matrix[i][0]==target)
	                return true;
	            index=i;
	        }
	    }
	    if(index==-1)
	    return false;
	    for(int i=0;i<M;i++)
	    {
	        if(matrix[index][i]==target)
	            return true;
	    }
	    return false;
    }
};