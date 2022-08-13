class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)return 1;
        int cursum=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        for(int i=1;i<n-1;i++){
            cursum+=a[i-1];
            int comp=sum-cursum-a[i];
            if(comp==cursum)
                return i+1;
        }
        return -1;
    }

};