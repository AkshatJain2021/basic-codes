class Solution {
public:
    int rob(vector<int>&nums,int index,vector<int>&dp)
    {
        if(index==0)
            return nums[0];
        if(index<0)
            return 0;
        if(index==1)
            return max(nums[0],nums[1]);
        if(dp[index]!=-1)
            return dp[index];
        //not pick
        int ans1=rob(nums,index-1,dp);
        //pick
        int ans2=rob(nums,index-2,dp);
        ans2+=nums[index];
        dp[index]= max(ans1,ans2);
            return dp[index];
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        vector<int>dp(size,-1);
        return rob(nums,size-1,dp);
    }
};