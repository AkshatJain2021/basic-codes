class Solution {
public:
    void subsets(vector<int>& nums,vector<vector<int>>&ans,vector<int>v,int si)
    {
        if(si==nums.size())
        {
            ans.push_back(v);
            return;
        }
        subsets(nums,ans,v,si+1);
        v.push_back(nums[si]);
        subsets(nums,ans,v,si+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        subsets(nums,ans,v,0);
        return ans;
    }
};