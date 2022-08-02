class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int ele=0,count=0;
        for(int i=0;i<size;i++)
        {
            if(count==0)
            {
                ele=a[i];
            }
            if(a[i]==ele)
            count++;
            else
            count--;
        }
        if(count<=0)return -1;
        count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==ele)
                count++;
        }
        int reqsize=(size/2)+1;
        if(count<reqsize)
            return -1;
        return ele;    
        
    }
};