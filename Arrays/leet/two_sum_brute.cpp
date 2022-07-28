class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        vector<int>output;
        int si=0,ei=nums.size()-1;
        pair<int,int>p;
        while(si<ei)
        {
            if(nums[si]+nums[ei]==target){
                p.first=nums[si];
                p.second=nums[ei];
                break;
        }
            else if(nums[si]+nums[ei]>target)
                --ei;
            else if(nums[si]+nums[ei]<target)
                ++si;
        }
        for(int i=0;i<nums.size();i++)
        {
             if(v[i]==p.first)
                 output.push_back(i);
            else if(v[i]==p.second)
                output.push_back(i);
        }
        return output;
    }
};