class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        long long int sum=0;
        while(size)
        {
            sum+=size;
            size--;
        }
        for(int i=0;i<nums.size();i++)
        {
            sum-=nums[i];
        }
        return sum;
    }
};