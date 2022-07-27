class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
            return nums[0];
        sort(nums.begin(),nums.end());
        return nums[size/2];
        
    }
};