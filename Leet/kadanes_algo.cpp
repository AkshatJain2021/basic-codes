class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum<0)
            {
                sum=0;
            }
            if(sum>maxsum)
            {
                maxsum=sum;
            }
        }
        if(maxsum==0)
        {
            int max=INT_MIN;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>max)
                {
                    max=nums[i];
                }
            }
            return max;
        }
        else
            return maxsum;
    }
};