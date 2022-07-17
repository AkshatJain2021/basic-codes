class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int n=nums2.size();
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                        int k=j+1;
                        bool push=false;
                        while(k<n)
                        {
                            if(nums1[i]<nums2[k])
                            {
                                push=true;
                                v.push_back(nums2[k]);
                                break;
                            }
                            k++;
                        }
                    if(!push)
                        v.push_back(-1);
                    }
                }
            }
        
        return v;
    }
};