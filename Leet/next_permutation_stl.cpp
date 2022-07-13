class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size=nums.size();
        if(size==1)
            return;
       next_permutation(nums.begin(),nums.end());
    }
};