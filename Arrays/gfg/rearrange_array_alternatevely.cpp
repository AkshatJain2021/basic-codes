class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
   
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	if(n==0 || n==1)return;
    	long long *arr2=new long long[n];
    	int hi=n-1,low=0,i=0;
    	while(low<hi)
    	{
    	    arr2[i++]=arr[hi];
    	    hi--;
    	    arr2[i++]=arr[low];
    	    low++;
    	}
    	if(hi==low)arr2[i]=arr[hi];
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]=arr2[i];
    	}
    	
    }
};