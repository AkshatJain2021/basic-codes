class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int>v;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            {
                v.push_back(-1);
                st.push(a[i]);
            }
            else if(st.top()<a[i])
            {
                v.push_back(st.top());
                st.push(a[i]);
            }
            else if(st.top()>=a[i])
            {
                bool push=false;
                while(st.size()!=0)
                {
                    if(st.top()<a[i])
                    {
                        push=true;
                        v.push_back(st.top());
                        st.push(a[i]);
                        break;
                    }
                    st.pop();
                }
                if(!push)
                {
                    v.push_back(-1);
                    st.push(a[i]);
                }
            }
        }
        return v;
    }
};