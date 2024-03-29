class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        if(n==1)
        {   v.push_back(a[0]);
                return v;
        }
        int max=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=max)
            {
                v.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};