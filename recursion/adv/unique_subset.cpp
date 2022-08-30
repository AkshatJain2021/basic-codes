class Solution {
public:
    void subsets(vector<int>& nums,vector<vector<int>>&ans,vector<int>&v,int si)
    {
        if(si==nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[si]);
        subsets(nums,ans,v,si+1);
        v.pop_back();
        while((si+1)<nums.size()&&nums[si]==nums[si+1])
            si++;
        subsets(nums,ans,v,si+1);
    }   
 vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        subsets(nums,ans,v,0);
        return ans;
    }
};