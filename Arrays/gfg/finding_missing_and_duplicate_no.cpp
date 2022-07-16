//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
int *find(int*arr,int*output,int n)
{
    vector<int>hash(n+1,0);
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(hash[i]==2)
            output[0]=i;
            if(hash[i]==0 && i!=0)
            output[1]=i;
        }
        return output;
}
    int *findTwoElement(int *arr, int n) {
        // code here
       
        int output[2]={0};
        
        return find(arr,output,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends