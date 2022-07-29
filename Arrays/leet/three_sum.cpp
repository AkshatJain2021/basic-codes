class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>output;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int low=i+1;
            int high=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]==0)
                {
                    vector<int>v2;
                    v2.push_back(nums[i]);
                    v2.push_back(nums[low]);
                    v2.push_back(nums[high]);
                    output.push_back(v2);
                   int lowno=nums[low];
                   int highno=nums[high];
                    while(lowno==nums[low]&&low<high)
                        low++;
                    while(highno==nums[high]&&low<high)
                        high--;
                }
                else if(nums[i]+nums[low]+nums[high]>0)
                {
                    high--;
                }
                else if(nums[i]+nums[low]+nums[high]<0)
                {
                    low++;
                }
            }
            
        }
        return output;
    }
};