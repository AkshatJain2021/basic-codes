class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        while(i<m&&j<n)
        {
            if(nums1[i]>=nums2[j])
            {
                swap(nums1[i],nums2[j]);
                i++;
                sort(nums2.begin(),nums2.end());
            }
            else{
                i++;
            }
        }
        int l=m;
        for(int k=0;k<n;k++)
        {
            nums1[l++]=nums2[k];
        }
    }
};