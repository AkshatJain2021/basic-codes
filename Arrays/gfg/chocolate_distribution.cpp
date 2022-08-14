class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
   
    long long min=INT_MAX;
    for(int i=0;i<a.size();i++)
    {
        int ei=i+m-1;
        if(ei>=a.size())break;
        long long cur=-a[i]+a[ei];
        if(cur<min)
        {
            min=cur;
        }
    }
    return min;
    }   
};