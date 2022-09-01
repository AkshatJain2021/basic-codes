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
        int ans2=nums[index]; 
         ans2+=rob(nums,index-2,dp);
        dp[index]= max(ans1,ans2);
            return dp[index];
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
            return nums[0];
        vector<int>dp(size,-1);
        vector<int>dp2(size,-1);
        vector<int>nums2(size,-1);
        for(int i=1;i<size;i++)
            nums2[i-1]=nums[i];
        return max(rob(nums2,size-1,dp),rob(nums,size-2,dp2));
    }
};