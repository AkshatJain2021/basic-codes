class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long>v;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                v.push_back(-1);
                st.push(arr[i]);
            }
            else if(st.top()>arr[i])
            {
                v.push_back(st.top());
                st.push(arr[i]);
            }
            else if(st.top()<=arr[i])
            {
                bool push=false;
                st.pop();
                while(!st.empty())
                {
                    if(st.top()>arr[i])
                    {
                        push=true;
                        v.push_back(st.top());
                        st.push(arr[i]);
                        break;
                    }
                    st.pop();
                }
                if(!push)
                {
                    st.push(arr[i]);
                    v.push_back(-1);
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};