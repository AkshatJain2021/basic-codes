class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n=arr.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=n)
            {
                arr[arr[i]-1]+=(n+1);
            }
            else if(arr[i]>n)
            {
                int index=arr[i]%(n+1);
                arr[index-1]+=(n+1);
            }
        }
        for(int i=0;i<n;i++)
        {
            int freq=arr[i]/(n+1);
            if(freq>1)
            {
                v.push_back(i+1);
            }
        }
        return v;
    }
};