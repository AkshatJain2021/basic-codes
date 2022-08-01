class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        if(size==3)
            return nums[0]+nums[1]+nums[2];
        int sum=nums[0]+nums[1]+nums[2];
       for(int i=0;i<size-2;i++)
       {
           int si=i+1,ei=size-1;
           while(si<ei)
           {
               int currsum=(nums[i]+nums[si]+nums[ei]);
               if(abs(sum-target)>abs(currsum-target))
               {
                   sum=currsum;
               }
               if(currsum>target)
               {
                   ei--;
               }
               else if(currsum<target)
               {
                   si++;
               }
               else
                   return target;
           }
       }
        return sum;
    }
};