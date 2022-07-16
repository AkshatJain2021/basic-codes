void sort012(int a[], int n)
{
    if(n==1)
       return;
    int low=0,mid=low,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            int temp=a[mid];
            a[mid]=a[low];
            a[low]=temp;
            mid++;
            low++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else if(a[mid]==2)
        {
             int temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high--;
        }
    }
}