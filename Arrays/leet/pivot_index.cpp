class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int *prefixsum=new int[n]{0};
        int *suffixsum=new int[n]{0};
        int k=0,currsum=0;
        for(int i=0;i<n;i++)
        {
            prefixsum[k++]=currsum;
            currsum+=nums[i];
        }
        k=n-1;
        currsum=0;
        for(int i=n-1;i>=0;i--)
        {
            suffixsum[k--]=currsum;
            currsum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(prefixsum[i]==suffixsum[i])
                return i;
        }
        return -1;
    }
};