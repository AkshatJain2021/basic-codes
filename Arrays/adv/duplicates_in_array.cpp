class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])]>=0)
            nums[abs(nums[i])]=-1*nums[abs(nums[i])];
            else
                break;
        }
        
        return abs(nums[i]);
    }
};