#include <iostream>
using namespace std;
bool issorted(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
   bool smalloutput=issorted(arr+1,n-1);
   if(smalloutput)
   {
       if(arr[0]>arr[1])
       {
           return false;
       }
       else
           return true;
   }
   else
       return false;
    
}
int main()
{
    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<issorted(arr,n);
}