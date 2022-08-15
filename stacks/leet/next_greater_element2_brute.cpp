class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>output;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            bool found=0;
            for(int j=i+1;j<len;j++)
            {
                if(nums[i]<nums[j])
                {
                    found=1;
                    output.push_back(nums[j]);
                    break;
                }
            }
            if(!found)
            {
                for(int k=0;k<i;k++)
                {
                    if(nums[k]>nums[i])
                    {
                        output.push_back(nums[k]);
                        found=1;
                        break;
                    }
                }
            }
            if(!found)output.push_back(-1);
        }
        return output;
    }
};