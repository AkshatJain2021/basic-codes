class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int si=0;
        int ei=nums.size()-1;
        int mid=si+((ei-si)/2);
        while(si<=ei)
        {
             mid=si+((ei-si)/2);
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                ei=mid-1;
            }
            else if(nums[mid]<target)
            {
                si=mid+1;
            }
        }
        if(nums[mid]>target)
        {
            return mid;
        }
        else{
            return mid+1;
        }
    }
};